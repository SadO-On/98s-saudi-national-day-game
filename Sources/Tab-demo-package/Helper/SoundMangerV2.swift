//
//  SoundMangerV2.swift
//  iosApp
//
//  Created by Mohammed Alsadoun on 14/08/1445 AH.
//  Copyright © 1445 AH orgName. All rights reserved.
//
import Foundation
import AVFoundation

class SoundManagerV2 : NSObject {

    static let shared = SoundManagerV2()

    override init() {
        try? AVAudioSession.sharedInstance().setCategory(AVAudioSession.Category.playback)
        try? AVAudioSession.sharedInstance().setActive(true)
    }

    private let serialQueue = DispatchQueue(label: "SoundQueue", qos: .userInitiated)
    private var currentPlayer: AVAudioPlayer?

    static func play(_ sound: String) {
        shared.play(sound)
    }

    func play(_ sound: String) {
        guard let url = Bundle.module.url(forResource: sound, withExtension: "wav") else { return }

        serialQueue.async {
            do {
                // Stop the currently playing player, if any
                self.currentPlayer?.stop()

                let player = try AVAudioPlayer(contentsOf: url)
                player.delegate = self
                player.prepareToPlay()

                // Set the new player as the current player
                self.currentPlayer = player

                // Since playing does not update the UI, it's okay to do it on the serial queue
                player.play()
            } catch {
                print("Failed to play sound: \(error)")
            }
        }
    }
}

extension SoundManagerV2: AVAudioPlayerDelegate {
    func audioPlayerDidFinishPlaying(_ player: AVAudioPlayer, successfully flag: Bool) {
        // Reset the current player when it finishes playing
        if player == currentPlayer {
            currentPlayer = nil
        }
    }
}
