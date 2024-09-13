//
//  Extension.swift
//  iosApp
//
//  Created by Mohammed Alsadoun on 04/08/1445 AH.
//  Copyright © 1445 AH orgName. All rights reserved.
//

import Foundation
import SwiftUI


// Extending on View to apply to all Views
extension View {
    func hide(if isHiddden: Bool) -> some View {
        ModifiedContent(content: self,
                        modifier: HideViewModifier(isHidden: isHiddden)
        )
    }
}

extension UIScreen{
   static let screenWidth = UIScreen.main.bounds.size.width
   static let screenHeight = UIScreen.main.bounds.size.height
   static let screenSize = UIScreen.main.bounds.size
}

// modifier
struct HideViewModifier: ViewModifier {
    let isHidden: Bool
    @ViewBuilder func body(content: Content) -> some View {
        if isHidden {
            EmptyView()
        } else {
            content
        }
    }
}


extension View {
    func imageShareSheet(
        isPresented: Binding<Bool>,
        images: [UIImage]
    ) -> some View {
        return sheet(isPresented: isPresented, content: { ImageShareSheet(images: images) } )
    }
    
    func imageShareSheet(
        isPresented: Binding<Bool>,
        image: UIImage
    ) -> some View {
        return sheet(isPresented: isPresented, content: { ImageShareSheet(images: [image]) } )
    }
}

let background = Color(red: 0.22, green: 0.57, blue: 0.54)
let gradientColor = [
    Color(red: 0.98, green: 0.98, blue: 0.98),
    Color(red: 0.89, green: 0.95, blue: 0.95),
    Color(red: 0.89, green: 0.95, blue: 0.95),
    Color(red: 0.81, green: 0.92, blue: 0.92),
]
let borderColor = Color(red: 0.30, green: 0.73, blue: 0.74)
let firstColColor = Color(red: 0.15, green: 0.44, blue: 0.42)
let secondColColor = Color(red: 0.26, green: 0.80, blue: 0.76)

let correctAnswerColor = Color(red: 0.39, green: 0.66, blue: 0.36)
let wrongAnswerColor = Color(red: 0.80, green: 0.12, blue: 0.07)



import UIKit

extension UIDevice {
    var isIPhoneSE: Bool {
        if UIDevice.current.userInterfaceIdiom == .phone {
            let screenSize = UIScreen.main.bounds.size
            if (screenSize.height == 568.0) || (screenSize.height == 667.0 && screenSize.width == 375.0) {
                return true
            }
        }
        return false
    }
}
