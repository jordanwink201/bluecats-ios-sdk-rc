bluecats-ios-sdk-rc
================

bluecats-ios-sdk-rc contains the BlueCatsSDK framework and static library. You must specify `libBlueCatsSDK` in your Podfile to use the static library.  

Which one should I use?  While using the framework is generally recommended, if developing for iOS7 devices use the static library.  If developing apps that require using bitcode, use the framework.

##Framework Installation

###With CocoaPods

Add the BlueCatsSDK framework to your Podfile in your Xcode project directory:

```ruby
pod 'BlueCatsSDK', :git => 'https://github.com/bluecats/bluecats-ios-sdk.git'
```

Now you can now install the BlueCatsSDK dependency in your project:

```
$ pod install
```
If you need to update the installed BlueCatsSDK dependency in your project:

```
$ pod update
```

###Without CocoaPods

1. Download the repo and drag and drop the uncompressed framework into your Xcode project.  Be sure to select "Copy items if needed."

2. In the target view general tab, remove the reference to the BlueCatsSDK.framework from the "Linked Frameworks and Libraries"" section. Then add the BlueCatsSDK.framework into the "Embedded Binaries" section (it will then reappear in the "Linked Frameworks and Libraries" section).

###Importing the Framework Into Your Project

If using Objective-C, use `#import <BlueCatsSDK/BlueCatsSDK.h>` to import the SDK's headers into your project.

If using Swift, you must create a bridging header to import the framework into your project. Please see the instructions below.

##Static Library Installation

The BlueCatsSDK static library is installed using CocoaPods.  CocoaPods is an Objective-C library dependency manager. You can learn more about CocoaPods from [http://cocoapods.org].

Add the BlueCatsSDK static library dependency to your Podfile in your Xcode project directory:

```ruby
pod 'libBlueCatsSDK', :git => 'https://github.com/bluecats/bluecats-ios-sdk.git'
```

Now you can install the BlueCatsSDK dependency in your project:

```
$ pod install
```

To update the installed BlueCatsSDK dependency in your project run the following command after ensuring `libBlueCatsSDK` is used:

```
$ pod update
```

###Swift Bridging Header
To import the BlueCatsSDK into a Swift project, you must create a bridging header.  
 1. Create a new header file and add `#import "BlueCatsSDK.h"`.
 2. You must include the bridging header in your target's build settings.  Search for "Bridging Header" in build settings and set it to `${PROJECT_NAME}/Your-Bridging-Header.h`.
