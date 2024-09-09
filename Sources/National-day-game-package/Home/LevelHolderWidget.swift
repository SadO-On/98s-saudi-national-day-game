//
//  LevelHolderWidget.swift
//  iosApp
//
//  Created by Mohammed Alsadoun on 20/07/1445 AH.
//  Copyright © 1445 AH orgName. All rights reserved.
//

import SwiftUI

struct LevelHolderWidget: View {
    let level: String
    var body: some View {
        Image("level_holder", bundle: .module)
            .resizable()
            .frame(width: UIScreen.screenWidth * 0.20, height: UIScreen.screenWidth * 0.20, alignment: .center)
            .overlay(
                VStack {
                    Text(".")
                        .font(.system(size: 1))
                        .padding(.bottom, 1)
                    Text(level)
                        .font(.system(size: UIScreen.screenWidth * 0.08))
                        .fontWeight(.bold)
                        .foregroundColor(.white)
              
                }
                
            )
    }
}

#Preview {
    LevelHolderWidget(level: "12")
}
