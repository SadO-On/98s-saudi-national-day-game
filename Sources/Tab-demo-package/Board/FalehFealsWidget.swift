//
//  FalehFealsWidget.swift
//  iosApp
//
//  Created by Mohammed Alsadoun on 13/08/1445 AH.
//  Copyright © 1445 AH orgName. All rights reserved.
//

import Shared
import SwiftUI

struct FalehFealsState: View {
    let falehFeel: FalehFeel

    var body: some View {
  
            switch falehFeel {
            case .idle:
                FelahFeelWidget(state: idleRes, holder: idleRes, frameCount: idleFrameCount)
            case .correct:
                FelahFeelWidget(state: correctRes, holder: correctRes, frameCount: correctFrameCount)
            case .sleep:
                FelahFeelWidget(state: sleepRes, holder: sleepRes, frameCount: sleepFrameCount)
            default:
                FelahFeelWidget(state: idleRes, holder: idleRes, frameCount: idleFrameCount)
            }
  

    }
}

struct FelahFeelWidget: View {
    @State var state: String = ""
    @State var holder: String
    @State var index = 2
    @State var frameCount: Int

    let timer = Timer.publish(every: 0.04, on: .main, in: .common).autoconnect()

    var body: some View {
        Image(state, bundle: .module)
            .resizable()
            .scaledToFit()
            .frame(width: UIScreen.screenWidth * 0.5,height: UIScreen.screenWidth * 0.3, alignment: .bottom)
// 300 170
            
            .onDisappear(perform: {
                timer.upstream.connect().cancel()
            })
            
            .onReceive(timer, perform: { _ in
                state = "\(holder)\(index)"
                index += 1
                if index > frameCount {
                    if holder == idleRes {
                        index = 2
                    } else {
                        state = idleRes
                        holder = idleRes
                        frameCount = idleFrameCount
                        index = 2
                    }
                }
            })
    }
}

#Preview {
    FalehFealsState(falehFeel: .sleep)
}

private let sleepRes = "sleepFrame"
private let idleRes = "idleFrame"
private let correctRes = "rightAnswerFrame"

private let sleepFrameCount = 204
private let idleFrameCount = 150
private let correctFrameCount = 100
