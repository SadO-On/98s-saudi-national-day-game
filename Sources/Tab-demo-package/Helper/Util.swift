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

let background = Color(red: 0.82, green: 0.706, blue: 0.863) // #d1b4dc
let gradientColor = [
    Color(red: 0.976, green: 0.976, blue: 0.976),
    Color(red: 0.976, green: 0.976, blue: 0.976),
    Color(red: 0.976, green: 0.976, blue: 0.976),
    Color(red: 0.933, green: 0.882, blue: 0.945),
    Color(red: 0.898, green: 0.796, blue: 0.925),
]
let borderColor = Color(red: 0.431, green: 0.192, blue: 0.475)
let firstColColor = Color(red: 0.835, green: 0.49, blue: 0.973)
let secondColColor = Color(red: 0.612, green: 0.318, blue: 0.725)
let textColor = Color(red: 0.624, green: 0.31, blue: 0.753) 
let correctAnswerColor = Color(red: 0.361, green: 0.835, blue: 0.898)
let wrongAnswerColor = Color(red: 0.875, green: 0.18, blue: 0.678)
