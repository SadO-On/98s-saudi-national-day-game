//
//  LottieResult.swift
//  iosApp
//
//  Created by Mohammed Alsadoun on 09/08/1445 AH.
//  Copyright © 1445 AH orgName. All rights reserved.
//

import Lottie
import SwiftUI

struct LottieView: UIViewRepresentable {
    let lottieFile: String// lottiefile
    let onFinish: () -> Void
    func makeUIView(context: UIViewRepresentableContext<LottieView>) -> some UIView {
        let view = UIView(frame: .zero)

        let lottieAnimationView = LottieAnimationView(name: lottieFile,  bundle: .module)

        lottieAnimationView.contentMode = .scaleAspectFill
        lottieAnimationView.loopMode = .playOnce
        lottieAnimationView.play(completion: { completed in
            if completed {
                onFinish()
            }
        })

        lottieAnimationView.translatesAutoresizingMaskIntoConstraints = false
        view.addSubview(lottieAnimationView)

        NSLayoutConstraint.activate([
            lottieAnimationView.widthAnchor.constraint(equalTo: view.widthAnchor),
            lottieAnimationView.heightAnchor.constraint(equalTo: view.heightAnchor),
        ])

        return view
    }

    func updateUIView(_ uiView: UIViewType, context: UIViewRepresentableContext<LottieView>) {
    }
}
