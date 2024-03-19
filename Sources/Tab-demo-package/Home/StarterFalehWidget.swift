//
//  StarterFaled.swift
//  iosApp
//
//  Created by Mohammed Alsadoun on 28/07/1445 AH.
//  Copyright © 1445 AH orgName. All rights reserved.
//

import SwiftUI
import AVKit
import Foundation

struct StarterAnimatedWidget: View {
    @State var player = AVPlayer()
    var body: some View {
        ZStack{
            PlayerView(
                player: $player
            
            )
            .aspectRatio(600 / 450, contentMode: .fill)

            .allowsHitTesting(false)
                .onAppear() {
                // Start the player going, otherwise controls don't appear
                guard let url = Bundle.module.url(forResource: "starter", withExtension: "mp4") else {
                    return
                }
                    
                let player = AVPlayer(url: url)
                self.player = player
                self.player.seek(to: CMTime.zero)
                self.player.play()
            }
            .onDisappear() {
                
                player.pause()
            }
        }

    }


}

#Preview {
    StarterAnimatedWidget()
}


class PlayerUIView: UIView {
    
    // MARK: Class Property
    
    let playerLayer = AVPlayerLayer()
    
    // MARK: Init
    
    override init(frame: CGRect) {
        super.init(frame: frame)
    }
    
    required init?(coder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    init(player: AVPlayer) {
        super.init(frame: .zero)
        self.playerSetup(player: player)
    }
    
    deinit {
        NotificationCenter.default.removeObserver(self)
    }
    
    // MARK: Life-Cycle
    
    override func layoutSubviews() {
        super.layoutSubviews()
        playerLayer.frame = bounds
        
    }
    
    // MARK: Class Methods
    
    private func playerSetup(player: AVPlayer) {
        playerLayer.player = player
        player.actionAtItemEnd = .none
        layer.addSublayer(playerLayer)
        playerLayer.backgroundColor = UIColor(red: 0.82, green: 0.706, blue: 0.863, alpha: 1).cgColor
    }
}


struct PlayerView: UIViewRepresentable {
    
    @Binding var player: AVPlayer
    
    func makeUIView(context: Context) -> PlayerUIView {
        return PlayerUIView(player: player)
    }
    
    func updateUIView(_ uiView: PlayerUIView, context: UIViewRepresentableContext<PlayerView>) {
        uiView.playerLayer.player = player
    }
}
