Pod::Spec.new do |s|
  s.name             = 'TISDK'
  s.version          = '1.3.1'
  s.summary          = 'Tinkoff Insurance SDK'
  s.description      = <<-DESC
Tinkoff Insurance SDK helps you buy OSAGO or KACKO insurance policies online in 5 minutes!
                       DESC

  s.homepage         = 'https://www.tinkoff.ru'
  s.license          = { :type => "Apache 2.0", :file => "LICENSE" }
  s.author           = { 'Vasilenko Igor Vladimirovich' => 'i.v.vasilenko@tinkoff.ru' }
  s.source           = { :git => "https://github.com/TinkoffCreditSystems/tisdk-ios.git", :tag => "#{s.version}" }

  s.platform = :ios
  s.swift_version = '4.0'
  s.ios.deployment_target = '9.0'
  s.frameworks = ['UIKit', 'PassKit', 'AVFoundation', 'CoreText', 'Security']
  s.library = 'c++'
  s.pod_target_xcconfig = {
       'CLANG_CXX_LANGUAGE_STANDARD' => 'c++11',
       'CLANG_CXX_LIBRARY' => 'libc++',
       'BITCODE_GENERATION_MODE' => 'bitcode',
       'OTHER_CFLAGS' => '-fembed-bitcode'
  }

  s.vendored_frameworks = 'TISDK.framework'

end
