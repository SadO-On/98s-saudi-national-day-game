// swift-tools-version: 5.9
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "Tab-demo-package",
    platforms: [
        .iOS(.v14),
],
    products: [
        // Products define the executables and libraries a package produces, making them visible to other packages.
        .library(
            name: "Tab-demo-package",
            type: .dynamic,
            targets: ["Tab-demo-package"]),
    ],
    dependencies: [
        .package(url: "https://github.com/airbnb/lottie-spm.git", from: "4.4.1"),
        .package(url: "https://github.com/canopas/UIPilot.git", .upToNextMajor(from: "2.0.2"))
    ],
    targets: [
        // Targets are the basic building blocks of a package, defining a module or a test suite.
        // Targets can depend on other targets in this package and products from dependencies.
        .target(
            name: "Tab-demo-package",
            dependencies: [
                .target(name: "Shared"),
                .product(name: "Lottie", package: "lottie-spm"),
                .byName(name: "UIPilot")
            ],
            resources: [.process("Media.xcassets"), .process("Sound")]),
        
     
        .binaryTarget(name: "Shared", path: "./Sources/shared.xcframework")

    ]
)
