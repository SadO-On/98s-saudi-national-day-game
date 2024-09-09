//
//  LetterTileView.swift
//  iosApp
//
//  Created by Mohammed Alsadoun on 07/07/1445 AH.
//  Copyright © 1445 AH orgName. All rights reserved.
//

import Shared
import SwiftUI

struct LetterTileView: View {
    let letter: Letter
    let colNumber: Int
    
    var body: some View {
        Text(letter.letter)
            .font(.system(size: UIScreen.screenWidth * 0.07).weight(.bold))
            .scaleEffect(!letter.isSelected && letter.isSwiped ? 1.3 : 1)
            .frame(width: UIScreen.screenWidth * 0.18, height: UIScreen.screenWidth * 0.18)
            .foregroundColor(.white)
            .background(letter.isWrong ? wrongAnswerColor: letter.isSelected ? correctAnswerColor : colNumber % 2 == 0 ? secondColColor : firstColColor)
            .cornerRadius(10)
            .animation(.snappy, value: letter.isSwiped)
            .animation(.snappy, value: letter.isWrong)

    }
}

#Preview {
    LetterTileView(letter: Letter(id: "ج", letter: "د", isSwiped: false, isSelected: false, isWrong: false), colNumber: 2)
}



