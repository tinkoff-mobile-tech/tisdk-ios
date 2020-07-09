Pod::Spec.new do |s|
  s.name             = 'TISDK'
  s.version          = '1.6.0'
  s.summary          = 'Tinkoff Insurance SDK'
  s.description      = <<-DESC
Tinkoff Insurance SDK helps you buy OSAGO or KACKO insurance policies online in 5 minutes!
                       DESC

  s.homepage         = 'https://www.tinkoff.ru'
  s.license          = { :type => "Apache 2.0", :file => "LICENSE" }
  s.author           = { 'Vasilenko Igor Vladimirovich' => 'i.v.vasilenko@tinkoff.ru' }
  s.source           = { :git => "https://github.com/TinkoffCreditSystems/tisdk-ios.git", :tag => "#{s.version}" }

  s.platform = :ios
  s.swift_version = '5.1'
  s.ios.deployment_target = '10.0'
  s.frameworks = ['UIKit', 'PassKit', 'AVFoundation', 'CoreText', 'Security']
  s.library = 'c++'
  s.pod_target_xcconfig = {
       'CLANG_CXX_LANGUAGE_STANDARD' => 'c++11',
       'CLANG_CXX_LIBRARY' => 'libc++',
       'BITCODE_GENERATION_MODE' => 'bitcode',
       'OTHER_CFLAGS' => '-fembed-bitcode'
  }
  s.dependency 'ASDKCore', '~> 1.5.2'
  s.dependency 'ASDKUI', '~> 1.5.2'
  s.dependency 'SnapKit', '~> 5.0.0'
  s.dependency 'NMEasyTipView', '~> 1.1'
  s.dependency 'TPKeyboardAvoiding', '~> 1.3.2'
  s.dependency 'TTTAttributedLabel', '~> 2.0.0'
  s.dependency 'AFNetworking/NSURLSession', '~> 4.0.1'
  s.dependency 'Typhoon', '~> 4.0.8'
  s.dependency 'IGListKit', '~> 4.0.0'

  s.vendored_frameworks = 'TISDK.framework', 'TinkoffUIKit.framework', 'TCSSmartFields.framework', 'TCSTextInputUtils.framework', 'TinkoffUtils.framework', 'TCSCardNumberUtils.framework', 'TinkoffDesignKit.framework'


end
