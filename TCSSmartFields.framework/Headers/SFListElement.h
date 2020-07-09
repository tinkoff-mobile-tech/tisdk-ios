//
//  SFListElement.h
//  TCSMBiOS
//
//  Created by Max Zhdanov on 19.09.16.
//  Copyright © 2016 АО «Тинькофф Банк», лицензия ЦБ РФ № 2673. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SFListElement : NSObject

@property (nonatomic, assign) BOOL enabled;

- (instancetype)initWithTitle:(NSString *)title;
- (instancetype)initWithTitle:(NSString *)title subtitle:(NSString *)subtitle;
- (instancetype)initWithTitle:(NSString *)title subtitle:(NSString *)subtitle hintTitle:(NSString *)hintTitle;
- (instancetype)initWithTitle:(NSString *)title subtitle:(NSString *)subtitle hintTitle:(NSString *)hintTitle userInfo:(NSDictionary *)userInfo;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

- (NSString *)title;
- (NSString *)subtitle;
- (NSString *)hintTitle;
- (NSDictionary *)userInfo;

@end
