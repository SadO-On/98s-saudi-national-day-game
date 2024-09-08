//
//  PointsWidget.swift
//  iosApp
//
//  Created by Mohammed Alsadoun on 18/07/1445 AH.
//  Copyright © 1445 AH orgName. All rights reserved.
//

import SwiftUI

struct PointsView: View {
    let points: Int32
    let gradientColor = [
        Color(red: 0.35, green: 0.73, blue: 0.74),
        Color(red: 0.13, green: 0.95, blue: 0.96),
        Color(red: 0.31, green: 0.75, blue: 0.76)
    ]
    var body: some View {
        Text("\(points) نقطة")
            .font(.system(size: 20))
            .fontWeight(.bold)
            .padding(.vertical, 8)
            .foregroundColor(.white)
            .padding(.horizontal, 12)
            .background(
                LinearGradient(gradient: Gradient(colors: gradientColor), startPoint: .top, endPoint: .bottom)
            )
            .clipShape(RoundedRectangle(cornerRadius: 12))
            .overlay(
                RoundedRectangle(cornerRadius: 12)
                    .stroke(Color(red: 0.06, green: 0.25, blue: 0.36), lineWidth: 2)
            )
    }
}

#Preview {
    PointsView(points: 100)
}
