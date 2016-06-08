BlueCats SDK for iOS Release Candidate
================
##### bluecats-ios-sdk-rc repo contains the current release candidate for the BlueCats iOS SDK.

The BlueCats iOS SDK release candidate is available as a framework and a static library. If upgrading from 0.6.7, you must update your podfile with `libBlueCatsSDK` to continue to use the static library.

Which one should I use?  While using the framework is generally recommended, if developing for iOS 7.0 devices use the static library.  Use the framework if developing apps targeting iOS 8.0 and later or the Apple Watch.

**See the [BlueCats Developer Portal](https://developer.bluecats.com) for SDK documentaiton and getting started guides.**

Need some beacons?  Check out the [store](http://store.bluecats.com/collections/featured-products/products/bluecats-starterpack-with-usb) for a StarterPack or email our [sales team](mailto:sales@bluecats.com).

## Framework Installation

### With CocoaPods

CocoaPods is an Objective-C library dependency manager. You can learn more about CocoaPods from [cocoapods.org](http://cocoapods.org/).

Add the BlueCatsSDK framework to your podfile in your Xcode project directory:

```ruby
platform :ios, '8.0'
pod 'BlueCatsSDK', :git => 'https://github.com/bluecats/bluecats-ios-sdk-rc.git'
```

Now you can now install the BlueCatsSDK dependency in your project:

```
$ pod install
```
If you need to update the installed BlueCatsSDK dependency in your project:

```
$ pod update
```

### Without CocoaPods

1. Download the repo and drag and drop the uncompressed framework into your Xcode project.  Be sure to select "Copy items if needed."

2. In the target view general tab, remove the reference to the BlueCatsSDK.framework from the "Linked Frameworks and Libraries"" section. Then add the BlueCatsSDK.framework into the "Embedded Binaries" section (it will then reappear in the "Linked Frameworks and Libraries" section).

### Importing the Framework Into Your Project

If using Objective-C, use `#import "BlueCatsSDK.h"` to import the SDK's headers into your project. If using Swift, use `import BlueCatsSDK`.

## Static Library Installation

The BlueCatsSDK static library is installed using CocoaPods.  CocoaPods is an Objective-C library dependency manager. You can learn more about CocoaPods from [cocoapods.org](http://cocoapods.org/).

Add the BlueCatsSDK static library dependency to your podfile in your Xcode project directory:

```ruby
platform :ios, '7.0'
pod 'libBlueCatsSDK', :git => 'https://github.com/bluecats/bluecats-ios-sdk-rc.git'
```

Now you can install the BlueCatsSDK dependency in your project:

```
$ pod install
```

To update the installed BlueCatsSDK dependency in your project run the following command after ensuring `libBlueCatsSDK` is used:

```
$ pod update
```

### Swift Bridging Header
To import `libBlueCatsSDK` into a Swift project, add `#import "BlueCatsSDK.h"` into your bridging header.

## Have a Question?
* If you've found a bug, [open an issue](https://github.com/bluecats/bluecats-ios-sdk/issues).
* If you have a general question, please see our [developer portal](developer.bluecats.com) and [support center](support.bluecats.com) for articles on our platform and beacons.
* If you want a particular feature, [open an issue](https://github.com/bluecats/bluecats-ios-sdk/issues).
* If taking a look at our SDK for the first time, please see our [iOS SDK documentation](https://developer.bluecats.com).
