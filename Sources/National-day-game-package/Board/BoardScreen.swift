//
//  BoardScreen.swift
//  iosApp
//
//  Created by Mohammed Alsadoun on 01/07/1445 AH.
//  Copyright © 1445 AH orgName. All rights reserved.
//

import Foundation
import Shared
import SwiftUI
import UIPilot

struct BoardScreen: View {
    @ObservedObject var viewModel: IOSBoardViewModel
    @EnvironmentObject var pilot: UIPilot<AppRoute>

    @State var isPause: Bool = false
    @State var isFirstTime: Bool

    init(isFirstTime: Bool) {
        viewModel = IOSBoardViewModel()
        self.isFirstTime = isFirstTime
    }

    private var fourColumnGrid = [GridItem(.flexible()), GridItem(.flexible()), GridItem(.flexible()), GridItem(.flexible())]

    var body: some View {
        ZStack {
            National_day_game_package.background.ignoresSafeArea(.all)

            VStack {
                HStack(alignment: .center, spacing: 30) {
                    TimerView(time: viewModel.state.time,
                              percent: viewModel.state.percent)
                        .animation(.linear, value: viewModel.state.percent)
                    PointsView(points: viewModel.state.points)
                        .animation(.bouncy, value: viewModel.state.points)

                    Button(action: {
                        isPause = !isPause
                        viewModel.onEevent(event: BoardEvents.OnPause())
                        SoundManager.shared.play()
                    }, label: {
                        Image("pause", bundle: .module)
                    })
                }
                Spacer()
                Text("كل كلمة تجدها تمثل ١٠٠ نقطة")
                    .font(.system(size: 20))
                    .fontWeight(.bold)
                    .foregroundColor(.white)
                Spacer()
                VStack(alignment: .leading, spacing:  UIScreen.screenWidth * 0.06) {
                    ForEach(0 ..< viewModel.state.grid.count, id: \.self) { row in
                        HStack(spacing:  UIScreen.screenWidth * 0.06) {
                            ForEach(0 ..< viewModel.state.grid[row].count, id: \.self) { col in
                                LetterTileView(letter: viewModel.state.grid[row][col], colNumber: col).id(row * 100 + col)
                            }
                            
                        }
                    }
                        }
                        .gesture(DragGesture(minimumDistance: 0)
                            .onChanged { value in
                                let touchLocation = value.location
                                determineSwipingPosition(touchLocation: touchLocation)
                            }.onEnded { _ in
                                viewModel.onEevent(event: BoardEvents.UserSwiped())
                            })
                    
             

                ZStack (alignment: .bottom){
                    FealsState(feel: viewModel.state.falehFeel)
                    Text("شعور التسعيني")
                        .font(.system(size: 20))
                        .fontWeight(.bold)
                        .foregroundColor(.white)
                }.padding(.bottom, 4)
            }
            if isPause {
                PauseScreen(onResume: {
                    isPause = !isPause
                    viewModel.onEevent(event: BoardEvents.OnResume())
                }, onHomeClick: {
                    pilot.popTo(.Home)
                })
            }
            if isFirstTime {
                TutorialScreen(onDone: {
                    isFirstTime = false
                    self.viewModel.onEevent(event: BoardEvents.GameStarted())
                })
            }
        }.navigationBarHidden(true)
            .navigationBarTitle("")
            .onAppear {
                self.viewModel.startObserving()
                if !isFirstTime  {
                    self.viewModel.onEevent(event: BoardEvents.GameStarted())
                }
            }.onDisappear {
                self.viewModel.onEevent(event: BoardEvents.OnCanel())
                self.viewModel.dipose()
            }.onChange(of: viewModel.state.isNavigate, perform: { canNaviagte in
                if canNaviagte {
                    pilot.push(.Result(stars: Int(viewModel.state.stars), list: Int(viewModel.state.stars) == 0 ?viewModel.state.remainingAnswers : []))
                }
            })
    }

    func determineSwipingPosition(touchLocation: CGPoint) {
        let gridSize = viewModel.state.grid.count

        guard gridSize > 0 else {
            return
        }
        let screenWidth = UIScreen.screenWidth

        
        let verticalSpacing: CGFloat = screenWidth * 0.06
        let horizontalSpacing: CGFloat = screenWidth * 0.06

        let tileWidth = screenWidth * 0.18
        let tileHeight = screenWidth * 0.18

        let row = max(0, min(Int((touchLocation.y + verticalSpacing) / (tileHeight + verticalSpacing)), gridSize - 1))
        let column = max(0, min(Int((touchLocation.x + horizontalSpacing) / (tileWidth + horizontalSpacing)), gridSize - 1))

        if row < 5 && column < 4 {
            viewModel.onEevent(event: BoardEvents.LetterSwiped(
                positions: [KotlinInt(int: Int32(row)), KotlinInt(int: Int32(column))]))
        }
    }
}

#Preview {
    BoardScreen(isFirstTime: false)
}
