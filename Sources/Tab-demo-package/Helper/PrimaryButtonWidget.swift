//
//  PrimaryButtonWidget.swift
//  iosApp
//
//  Created by Mohammed Alsadoun on 04/08/1445 AH.
//  Copyright © 1445 AH orgName. All rights reserved.
//

import AVFoundation
import Foundation
import SwiftUI

struct PrimaryButtonWidget: View {
    let text: String
    let onClick: () -> Void

    var body: some View {
        Button(action: {
            onClick()
            SoundManager.shared.play()
        }, label: {
            ZStack {
                Image("play_button", bundle: .module)
                Text(text)
                    .font(.system(size: UIScreen.screenWidth * 0.09))
                    .fontWeight(.bold)
                    .padding(.bottom, 16)
                    .foregroundColor(.white)
            }
        })
    }
}

#Preview {
    PrimaryButtonWidget(text: "التالي") {
    }
}


struct SoundManager {
    static var shared = SoundManager()

    var audioPlayer: AVAudioPlayer?

    private init() {
        initAudioPlayer()
    }

    private mutating func initAudioPlayer() {
        do {
            if let soundURL = Bundle.module.url(forResource: "click", withExtension: "wav") {
                audioPlayer = try AVAudioPlayer(contentsOf: soundURL)
                audioPlayer?.prepareToPlay()
            } else {
                print("Sound file not found.")
            }
        } catch {
            print("Error initializing audio player: \(error)")
        }
    }

     func play() {
        DispatchQueue.main.async {
            if let player = self.audioPlayer {
                if !player.isPlaying {
                    player.play()
                }
            }
        }
    }
}
