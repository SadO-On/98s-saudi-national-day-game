//
//  ResultLetterTile.swift
//  iosApp
//
//  Created by Mohammed Alsadoun on 10/08/1445 AH.
//  Copyright © 1445 AH orgName. All rights reserved.
//

import SwiftUI

struct ResultLetterTile: View {
    let letter: String
    let colNumber: Int
    var body: some View {
        Text(letter)
            .font(.system(size: 18).weight(.bold))
            .frame(width: 40, height: 40)
            .foregroundColor(.white)
            .background(colNumber % 2 == 0 ? firstColColor : secondColColor)
            .cornerRadius(10)
            .animation(.snappy, value: letter)    }
}

#Preview {
    ResultLetterTile(letter: "أ", colNumber: 2)
}
