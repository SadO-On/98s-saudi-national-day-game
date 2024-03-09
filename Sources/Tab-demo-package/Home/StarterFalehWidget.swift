//
//  StarterFaled.swift
//  iosApp
//
//  Created by Mohammed Alsadoun on 28/07/1445 AH.
//  Copyright © 1445 AH orgName. All rights reserved.
//

import SwiftUI

struct StarterAnimatedWidget: View {
    @State var Robot: String = "startFrame1"

    var body: some View {
        Image(Robot, bundle: .module)
            .resizable()
            .frame(width: 300, height: 200, alignment: .center)
            .onAppear(perform: timerRobot)
    }

    func timerRobot() {
        var index = 2
        _ = Timer.scheduledTimer(withTimeInterval: 0.04, repeats: true) { Timer in
            Robot = "startFrame\(index)"
            index += 1
            if index > 74 {
                Timer.invalidate()
            }
        }
    }
}

#Preview {
    StarterAnimatedWidget()
}
