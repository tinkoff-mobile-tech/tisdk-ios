//
//  SFCheckboxItemLink.h
//  TCSMBiOS
//
//  Created by Max Zhdanov on 03.08.16.
//  Copyright © 2016 АО «Тинькофф Банк», лицензия ЦБ РФ № 2673. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SFCheckboxItemLink : NSObject

@property (nonatomic, strong, readonly) NSString *urlString;
@property (nonatomic, strong, readonly) NSString *title;

- (instancetype)initWithUrlString:(NSString *)urlString title:(NSString *)title;
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)new NS_UNAVAILABLE;

@end
