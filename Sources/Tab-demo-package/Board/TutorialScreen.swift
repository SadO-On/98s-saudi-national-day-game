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

    @State var twoDArray: [[TutorialLetter]] = [[TutorialLetter(letter: "ش", isSelected: true), TutorialLetter(letter: "غ", isSelected: true), TutorialLetter(letter: "ب", isSelected: true)], [TutorialLetter(letter: "ط", isSelected: false), TutorialLetter(letter: "ج", isSelected: false), TutorialLetter(letter: "د", isSelected: false)], [TutorialLetter(letter: "ب", isSelected: false), TutorialLetter(letter: "ج", isSelected: false), TutorialLetter(letter: "ر", isSelected: false)]]

    @State var isGotIt = false
    var threeCol = [GridItem(.flexible(), spacing: 0), GridItem(.flexible(), spacing: 0), GridItem(.flexible(), spacing: 0)]

    var body: some View {
        ZStack {
            Color(red: 0.00, green: 0.00, blue: 0.00)
                .ignoresSafeArea(.all)
                .opacity(0.7)
            VStack {
                Text("تعليمات")
                    .font(.system(size: UIScreen.screenWidth * 0.09))
                    .fontWeight(.bold)
                    .padding(.vertical, 16)
                    .foregroundColor(.white)
                VStack(alignment: .trailing) {
                    Text("1- بإمكانك إختيار الكلمات بشكل عمودي او افقي فقط")
                        .font(.system(size: UIScreen.screenWidth * 0.04))
                        .fontWeight(.bold)
                        .padding(.bottom, 24)
                        .foregroundColor(.white)
                    Text("2- بامكانك اعادة اختيار حرف واحد فقط مستخدم")
                        .font(.system(size: UIScreen.screenWidth * 0.04))
                        .fontWeight(.bold)
                        .padding(.bottom, 16)
                        .foregroundColor(.white)
                }.padding(.top, 50)
                Spacer()

                VStack(alignment: .leading, spacing: 16) {
                    ForEach(0 ..< twoDArray.count, id: \.self) { row in
                        HStack(spacing: 16) {
                            ForEach(0 ..< twoDArray[row].count, id: \.self) { col in
                                LetterTutorialTileView(letter: twoDArray[row][col], colNumber: col)
                                    .id(row * 100 + col)
                            }
                        }
                    }
                }
                .environment(\.layoutDirection, .rightToLeft)

                Spacer()
                PrimaryButtonWidget(text: "فهمت", onClick: {
                    onDone()
                }).padding(.top, 72)
                    .hide(if: !isGotIt)
            }
        }.onAppear(perform: {
            DispatchQueue.main.asyncAfter(deadline: .now() + 5) {
                isGotIt = true
            }
            DispatchQueue.main.asyncAfter(deadline: .now() + 3) {
                SoundManagerV2.shared.play("correct-swipe")
                twoDArray = [[TutorialLetter(letter: "ش", isSelected: true), TutorialLetter(letter: "غ", isSelected: true), TutorialLetter(letter: "ب", isSelected: true)], [TutorialLetter(letter: "ط", isSelected: false), TutorialLetter(letter: "ج", isSelected: false), TutorialLetter(letter: "د", isSelected: true)], [TutorialLetter(letter: "ب", isSelected: false), TutorialLetter(letter: "ج", isSelected: false), TutorialLetter(letter: "ر", isSelected: true)]]
            }
        })
    }
}

#Preview {
    TutorialScreen(onDone: {})
}

struct TutorialLetter {
    let letter: String
    let isSelected: Bool
}

struct LetterTutorialTileView: View {
    let letter: TutorialLetter
    let colNumber: Int

    var body: some View {
        Text(letter.letter)
            .font(.system(size: UIScreen.screenWidth * 0.07).weight(.bold))
            .frame(width: UIScreen.screenWidth * 0.18, height: UIScreen.screenWidth * 0.18)
            .foregroundColor(.white)
            .background(letter.isSelected ? correctAnswerColor : colNumber % 2 == 0 ? firstColColor : secondColColor)
            .cornerRadius(10)
            .animation(.snappy, value: letter.isSelected)
    }
}
