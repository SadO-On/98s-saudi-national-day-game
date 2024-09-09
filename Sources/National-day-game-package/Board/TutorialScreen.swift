//
//  SwiftUIView.swift
//
//
//  Created by Mohammed Alsadoun on 16/08/1445 AH.
//

import Shared
import SwiftUI

struct TutorialScreen: View {
    public let onDone: () -> Void
    @State var isGotIt = false
    @State var count = 1

    var body: some View {
        ZStack {
            Color(red: 0.00, green: 0.00, blue: 0.00)
                .ignoresSafeArea(.all)
                .opacity(0.7)
            VStack {
                if count == 1 {
                    LottieView(lottieFile: "Instruction_1.json", onFinish: {
                        withAnimation(.bouncy) {
                            isGotIt = true
                        }
                    })
                } else if count == 2 {
                    LottieView(lottieFile: "Instruction_2.json", onFinish: {
                        withAnimation(.bouncy) {
                            isGotIt = true
                        }
                    })
                }else {
                    LottieView(lottieFile: "Instruction_3.json", onFinish: {
                        withAnimation(.bouncy) {
                            isGotIt = true
                        }
                    })
                }
                Spacer()
                PrimaryButtonWidget(text: count == 3 ? "فهمت" : "التالي", onClick: {
                    if count >= 3 {
                        onDone()
                    }else {
                        isGotIt = false
                        count += 1
                    }
                }).hide(if: !isGotIt)
            }
        }
    }
}

#Preview {
    TutorialScreen(onDone: {})
}
