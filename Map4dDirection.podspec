Pod::Spec.new do |s|
    s.name              = 'Map4dDirection'
    s.version           = '0.0.1'
    s.summary           = 'Map4D Direction SDK'
    s.homepage          = 'http://map4d.vn'

    s.author            = { 'Sua Le' => 'sua8051@gmail.com' }
    s.license           = { :type => 'Apache-2.0'}

    s.platform          = :ios
    s.source = { :git => 'https://github.com/iotlinkadmin/map4d-direction-ios-sdk.git', :tag => s.version.to_s }

    s.ios.deployment_target = '9.0'
    s.ios.vendored_frameworks = 'sdk/Map4dDirection.framework'
end
