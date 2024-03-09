import SwiftUI
import UIPilot
import Shared


public struct GameStartView: View {
    @StateObject var pilot = UIPilot(initial: AppRoute.Home)
    @Binding var isPresenting: Bool

    public init(isPresenting: Binding<Bool>){
        self._isPresenting = isPresenting
    }
    
   
    public var body: some View {
            UIPilotHost(pilot){ route in
                switch route {
                case .Home: HomeScreen(onBackClicked: {
                    isPresenting = false
                })
                case.Board(let isFirstTime): BoardScreen(isFirstTime: isFirstTime)
                case.Result(let stars, let list): ResultScreen(isWin: stars != 0, starsCount: stars, list: list)
                }
            }.ignoresSafeArea(.all)
//            .onAppear {
//                SoundManager.shared
//            }
   
      
    }
}

//struct ContentView_Previews: PreviewProvider {
//    static var previews: some View {
////        GameStartView(isPresenting: false)
////            .environment(\.font, Font.custom("Tajawal", size: 14))
////         
//
//    }
//}
