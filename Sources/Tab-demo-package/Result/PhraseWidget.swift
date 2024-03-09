//
//  PhraseWidget.swift
//  iosApp
//
//  Created by Mohammed Alsadoun on 04/08/1445 AH.
//  Copyright © 1445 AH orgName. All rights reserved.
//

import SwiftUI

struct PhraseWidget: View {
    let starsCount: Int

    var body: some View {
        ZStack {
            switch starsCount {
            case 0:
                Image("Sad", bundle: .module)
                    .resizable()
                    .scaledToFit()
                    .frame(width: UIScreen.screenWidth * 0.4, height: UIScreen.screenWidth * 0.42)
            case 1:
                Image("Sad", bundle: .module)
                    .resizable()
                    .scaledToFit()
                    .frame(width: UIScreen.screenWidth * 0.55, height: UIScreen.screenWidth * 0.57)
            case 2:
                Image("Kfo", bundle: .module)
                    .resizable()
                    .scaledToFit()
                    .frame(width: UIScreen.screenWidth * 0.55, height: UIScreen.screenWidth * 0.57)
            case 3:
                Image("Legend", bundle: .module)
                    .resizable()
                    .scaledToFit()
                    .frame(width: UIScreen.screenWidth * 0.55, height: UIScreen.screenWidth * 0.57)
            default:
                Image("Kfo", bundle: .module)
            }
        }
    }
}

#Preview {
    PhraseWidget(starsCount: 3)
}
