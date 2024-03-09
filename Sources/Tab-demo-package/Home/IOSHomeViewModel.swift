//
//  IOSHomeViewModel.swift
//  iosApp
//
//  Created by Mohammed Alsadoun on 08/08/1445 AH.
//  Copyright © 1445 AH orgName. All rights reserved.
//

import Foundation
import Shared

extension HomeScreen {
    @MainActor class IOSHomeViewModel: ObservableObject {
        private let viewModel: HomeViewModel

        @Published var state = HomeState(id: "", userLevel: UserLevel(level: 1, xp: 0, isFirstTime: false))

        private var handle: DisposableHandle?

        init() {
            viewModel = HomeViewModel(courotineScope: nil, context: NSObject())
        }

        func onEevent(event: HomeEvents) {
            viewModel.onEvent(events: event)
        }

        // Observe the changes
        func startObserving() {
            handle = viewModel.state.subscribe(onCollect: { state in
                if let state = state {
                    self.state = state
                }
            })
        }

        func dipose() {
            handle?.dispose()
        }
    }
}
