//
//  FalehFealsWidget.swift
//  iosApp
//
//  Created by Mohammed Alsadoun on 13/08/1445 AH.
//  Copyright © 1445 AH orgName. All rights reserved.
//

import Shared
import SwiftUI

struct FealsState: View {
    let feel: FalehFeel

    var body: some View {
  
            switch feel {
            case .idle:
                FeelWidget(state: idleRes, holder: idleRes, frameCount: idleFrameCount)
            case .correct:
                FeelWidget(state: correctRes, holder: correctRes, frameCount: correctFrameCount)
            case .sleep:
                FeelWidget(state: sleepRes, holder: sleepRes, frameCount: sleepFrameCount)
            default:
                FeelWidget(state: idleRes, holder: idleRes, frameCount: idleFrameCount)
            }
  

    }
}

struct FeelWidget: View {
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
    FealsState(feel: .idle)
}

private let sleepRes = "sleepFrame"
private let idleRes = "idleFrame"
private let correctRes = "rightAnswerFrame"

private let sleepFrameCount = 214
private let idleFrameCount = 192
private let correctFrameCount = 80
