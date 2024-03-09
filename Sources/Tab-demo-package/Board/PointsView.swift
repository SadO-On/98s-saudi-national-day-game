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
        Color(red: 0.616, green: 0.322, blue: 0.729),
        Color(red: 0.616, green: 0.322, blue: 0.729),
        Color(red: 0.616, green: 0.322, blue: 0.729),
        Color(red: 0.596, green: 0.31, blue: 0.702),
        Color(red: 0.58, green: 0.298, blue: 0.678),
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
                    .stroke(borderColor, lineWidth: 2)
            )
    }
}

#Preview {
    PointsView(points: 100)
}
