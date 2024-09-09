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
                Image("phrase-1", bundle: .module)
                    .resizable()
                    .scaledToFit()
                    .frame(width: UIScreen.screenWidth * 0.4, height: UIScreen.screenWidth * 0.42)
            case 1:
                Image("phrase-1", bundle: .module)
                    .resizable()
                    .scaledToFit()
                    .frame(width: UIScreen.screenWidth * 0.55, height: UIScreen.screenWidth * 0.57)
            case 2:
                Image("phrase-2", bundle: .module)
                    .resizable()
                    .scaledToFit()
                    .frame(width: UIScreen.screenWidth * 0.55, height: UIScreen.screenWidth * 0.57)
            case 3:
                Image("phrase-3", bundle: .module)
                    .resizable()
                    .scaledToFit()
                    .frame(width: UIScreen.screenWidth * 0.55, height: UIScreen.screenWidth * 0.57)
            default:
                Image("phrase-1", bundle: .module)
            }
        }
    }
}

#Preview {
    PhraseWidget(starsCount: 2)
}
