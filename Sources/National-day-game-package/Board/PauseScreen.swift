//
//  PauseScreen.swift
//  iosApp
//
//  Created by Mohammed Alsadoun on 04/08/1445 AH.
//  Copyright © 1445 AH orgName. All rights reserved.
//

import SwiftUI

struct PauseScreen: View {
    let onResume: () -> Void
    let onHomeClick: () -> Void

    var body: some View {
        ZStack {
            Color(red: 0.00, green: 0.00, blue: 0.00)
                .ignoresSafeArea(.all)
                .opacity(0.7)
            VStack {
                Spacer()
                Button(action: {
                    onResume()
                }, label: {
                    Image("resume", bundle: .module)
                })
                Spacer()
                PrimaryButtonWidget(text: "الرئيسية", onClick: {
                    onHomeClick()
                }).padding(.top, 72)
            }
        }
    }
}

#Preview {
    PauseScreen(onResume: {}, onHomeClick: {})
}
