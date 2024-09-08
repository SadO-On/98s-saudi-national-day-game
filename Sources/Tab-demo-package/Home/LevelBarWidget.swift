//
//  LevelBarWidget.swift
//  iosApp
//
//  Created by Mohammed Alsadoun on 20/07/1445 AH.
//  Copyright © 1445 AH orgName. All rights reserved.
//

import SwiftUI

struct LevelBarWidget: View {
    let width: CGFloat = 300
    @State private var animatedWidth: CGFloat = 0 // State to control the animated width
    var percent: Float
  
    let background = Color(red: 0.98, green: 0.98, blue: 0.98)

    var body: some View {
        let multiplayer = width / 100
        ZStack(alignment: .leading) {
            RoundedRectangle(cornerRadius: 12)
                .stroke(Color(red: 0.30, green: 0.73, blue: 0.74), lineWidth: 0)
                .frame(width: width, height: UIScreen.screenWidth * 0.09)
                .background(
                    LinearGradient(gradient: Gradient(colors: gradientColor), startPoint: .top, endPoint: .bottom)
                )
            RoundedRectangle(cornerRadius: 12)
                .stroke(Color(red: 0.30, green: 0.73, blue: 0.74), lineWidth: 0)

                .frame(width: animatedWidth, height: UIScreen.screenWidth * 0.09)
                .background(Color(red: 0.30, green: 0.73, blue: 0.74))
                .onAppear {
                    // Animate from 0 to the final width based on percent
                    withAnimation(.easeOut(duration: 1.0)) {
                        animatedWidth = CGFloat(percent) * multiplayer
                    }
                }
                .onChange(of: percent, perform: { value in
                    withAnimation(.easeOut(duration: 1.0)) {
                        animatedWidth = CGFloat(value) * multiplayer
                    }
                })

            RoundedRectangle(cornerRadius: 12)
                .stroke(Color(red: 0.30, green: 0.73, blue: 0.74), lineWidth: 3)
                .frame(width: width, height: UIScreen.screenWidth * 0.09)

        }.clipShape(RoundedRectangle(cornerRadius: 11, style: .continuous))
    }
}

#Preview {
    LevelBarWidget(percent: 30)
}
