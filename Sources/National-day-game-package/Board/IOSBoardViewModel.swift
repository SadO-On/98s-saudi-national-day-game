//
//  IOSBoardViewModel.swift
//  iosApp
//
//  Created by Mohammed Alsadoun on 12/07/1445 AH.
//  Copyright © 1445 AH orgName. All rights reserved.
//

import Foundation
import Shared

extension BoardScreen {
    @MainActor class IOSBoardViewModel: ObservableObject {
        private let viewModel: BoardViewModel

        @Published var state = BoardState(grid: [[]], percent: 100, time: "0:00", points: 200, isNavigate: false, stars: 0, remainingAnswers: [], id: "", falehFeel: FalehFeel.idle)

        private var handle: DisposableHandle?
        private var soundHandle: DisposableHandle?

        init() {
            viewModel = BoardViewModel(coroutineScope: nil, context: NSObject())
        }

        func onEevent(event: BoardEvents) {
            viewModel.onEvent(event: event)
        }

        // Observe the changes
        func startObserving() {
            handle = viewModel.state.subscribe(onCollect: { newState in
                if let newState = newState {
                    self.state = newState
                }
            })
            soundHandle = viewModel.soundState.subscribe(onCollect: { newState in
                if let newState = newState {
                    self.soundController(soundState: newState.soundState)
                }

            })
        }

        func dipose() {
            soundHandle?.dispose()
            handle?.dispose()
        }

        func soundController(soundState: SoundType) {
            switch soundState {
            case .started:
                playSound(fileName: "new-board")
                break
            case .halfTime:
                playSound(fileName: "almost")
                break
            case .wrongSwipe:
                playSound(fileName: "wrong-swipe")
                break
            case .correctSwipe:
                playSound(fileName: "correct-swipe")
                break
            default:
               Void()
            }
        }

        func playSound(fileName: String) {
            SoundManagerV2.shared.play(fileName)
        }
    }
}
