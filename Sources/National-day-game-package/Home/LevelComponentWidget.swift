//
//  LevelSectionWidget.swift
//  iosApp
//
//  Created by Mohammed Alsadoun on 20/07/1445 AH.
//  Copyright © 1445 AH orgName. All rights reserved.
//

import SwiftUI

struct LevelComponentWidget: View {
    let level: String
    let percent: Float
    var body: some View {
        ZStack{
            LevelBarWidget(percent: percent)
            HStack(alignment: .top){
                LevelHolderWidget(level: level)
                    .padding(.bottom)
                Spacer()
            }
        }
    }
}

#Preview {
    LevelComponentWidget(level: "12", percent: 60)
}
