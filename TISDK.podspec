Pod::Spec.new do |s|
  s.name             = 'TISDK'
  s.version          = '1.1.3'
  s.summary          = 'Tinkoff Insurance SDK'
  s.description      = <<-DESC
Tinkoff Insurance SDK helps you buy OSAGO or KACKO insurance policies online in 5 minutes!
                       DESC

  s.homepage         = 'https://www.tinkoff.ru'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Vasilenko Igor Vladimirovich' => 'i.v.vasilenko@tinkoff.ru' }
  s.source           = { :http => "https://github.com/TinkoffCreditSystems/tisdk-ios/releases/download/#{s.version}/TISDK.zip" }

  s.platform = :ios
  s.requires_arc = true
  s.ios.deployment_target = '9.0'
  s.frameworks = ['UIKit', 'PassKit', 'AVFoundation', 'CoreText', 'CommonCrypto', 'Security']
  s.library = 'c++'  
  s.pod_target_xcconfig = {
       'CLANG_CXX_LANGUAGE_STANDARD' => 'c++11',
       'CLANG_CXX_LIBRARY' => 'libc++'
  }
  
  s.preserve_paths      = 'TISDK.framework/*'

  s.public_header_files = 'TISDK.framework/Headers/TISDK.h', 
                          'TISDK.framework/Headers/TIInsurance.h', 
                          'TISDK.framework/Headers/TIPolicyInfo.h', 
                          'TISDK.framework/Headers/TIAnalyticsResolver.h'

  s.source_files        = 'TISDK.framework/Headers/TISDK.h', 
                          'TISDK.framework/Headers/TIInsurance.h', 
                          'TISDK.framework/Headers/TIPolicyInfo.h', 
                          'TISDK.framework/Headers/TIAnalyticsResolver.h'
                          
  s.vendored_frameworks = 'TISDK.framework'

end
