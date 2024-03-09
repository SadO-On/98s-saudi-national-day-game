//
//  ShareSheet.swift
//  iosApp
//
//  Created by Mohammed Alsadoun on 14/08/1445 AH.
//  Copyright © 1445 AH orgName. All rights reserved.
//

import SwiftUI

///  A view for sharing an image. The user can add the image to their cameraroll, share it via iMessage, etc.
struct ImageShareSheet: UIViewControllerRepresentable {
    /// The images to share
    let images: [UIImage]
    
    func makeUIViewController(context: Context) -> some UIViewController {
        let activityViewController = UIActivityViewController(activityItems: images, applicationActivities: nil)
        
        // exclude some activity types from the list (optional)
        // activityViewController.excludedActivityTypes = [ UIActivity.ActivityType.airDrop, UIActivity.ActivityType.postToFacebook ]
        
        return activityViewController
    }
    
    func updateUIViewController(_ uiViewController: UIViewControllerType, context: Context) {
        
    }
}
