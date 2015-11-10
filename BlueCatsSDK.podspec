Pod::Spec.new do |s|
  s.name     = 'BlueCatsSDK'
  s.version  = '0.7.0.rc.4'
  s.license      = {
    :type => 'Commercial',
    :text => <<-LICENSE
              All text and design is copyright © 2011-2014 Plus Location Systems, LLC.

              All rights reserved.

              https://bluecats.com/tos/
    LICENSE
  }
  s.summary  = 'BlueCatsSDK for micro-location.'
  s.homepage = 'http://www.bluecats.com'
  s.authors   = { 'BlueCats' => 'theteam@bluecats.com' }
  s.source   = { :git => 'https://github.com/bluecats/bluecats-ios-sdk-rc.git', :tag => s.version }
  s.platform = :ios
  s.resource = 'BlueCatsSDK.framework'
  s.requires_arc = true
  s.ios.deployment_target = '8.0'
  s.frameworks = 'SystemConfiguration', 'CoreBluetooth', 'MobileCoreServices', 'CoreGraphics', 'CoreLocation', 'AdSupport', 'CoreData'
  s.ios.vendored_frameworks = 'BlueCatsSDK.framework'
end
