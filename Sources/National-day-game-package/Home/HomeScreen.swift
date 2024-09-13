//
//  HomeScreen.swift
//  iosApp
//
//  Created by Mohammed Alsadoun on 20/07/1445 AH.
//  Copyright © 1445 AH orgName. All rights reserved.
//

import Shared
import SwiftUI
import UIPilot
 
struct HomeScreen: View {
    @EnvironmentObject var pilot: UIPilot<AppRoute>
    @ObservedObject var viewModel: IOSHomeViewModel
    @Environment(\.openURL) var openURL

    @State private var scales: [CGFloat]

    let onBackClicked: () -> Void

    init(onBackClicked: @escaping () -> Void) {
        viewModel = IOSHomeViewModel()
        _scales = State(initialValue: Array(repeating: 0, count: 4))
        self.onBackClicked = onBackClicked
    }

    var body: some View {
        ZStack {
            National_day_game_package.background.ignoresSafeArea(.all)

            VStack {
                HStack(alignment: .top) {
                    Button(action: {
                        onBackClicked()
                    }, label: {
                        Image("back_btn", bundle: .module)
                    }).padding()
                    
                    Spacer()
                }.scaleEffect(scales[0])
                    .onAppear {
                        withAnimation(.spring(response: 0.5, dampingFraction: 0.5, blendDuration: 0)) {
                            scales[0] = 1
                        }
                    }
                
                LevelComponentWidget(level: String(viewModel.state.userLevel.level),
                                     percent: viewModel.state.userLevel.xp)
                .scaleEffect(scales[2])
                .onAppear {
                    withAnimation(.spring(response: 0.5, dampingFraction: 0.5, blendDuration: 0).delay(0.1)) {
                        scales[2] = 1
                    }
                }
                .padding(.horizontal)
                HStack {
                    Image("title", bundle: .module)
                        .resizable()
                        .frame(width: UIScreen.screenWidth * 0.85, height: UIScreen.screenWidth * 0.25)
                }.scaleEffect(scales[1])
                    .onAppear {
                        withAnimation(.spring(response: 0.5, dampingFraction: 0.5, blendDuration: 0).delay(0.1)) {
                            scales[1] = 1
                        }
                    }
                StarterAnimatedWidget()
                    .onAppear(perform: {
                        withAnimation(.spring(response: 0.5, dampingFraction: 0.5, blendDuration: 0).delay(0.7)) {
                            scales[2] = 1
                        }
                    })
                Spacer()
                PrimaryButtonWidget(text: "العب", onClick: {
                    if viewModel.state.userLevel.isFirstTime {
                        pilot.push(.Board(isFirstTime: true))
                    } else {
                        pilot.push(.Board(isFirstTime: false))
                    }
                }).padding(.bottom,20)
                .scaleEffect(scales[3])
                .onAppear {
                    self.viewModel.startObserving()
                    self.viewModel.onEevent(event: HomeEvents.GetLevel())
                    // Animate to full size with a spring effect
                    withAnimation(.spring(response: 0.5, dampingFraction: 0.5, blendDuration: 0).delay(0.5)) {
                        scales[3] = 1 // Animate to full size
                    }
                }
                
                if !UIDevice.current.isIPhoneSE {
                    
                    Button(action: { openURL(URL(string: "https://www.98s.studio/en")!)
                    }, label: {
                        Image("powered_by", bundle: .module).padding(.top)
                    }).padding(.bottom, 20)
                }
            }
        }.navigationBarHidden(true).navigationBarTitle("")
    }
}

#Preview {
    HomeScreen(onBackClicked: {})
}
