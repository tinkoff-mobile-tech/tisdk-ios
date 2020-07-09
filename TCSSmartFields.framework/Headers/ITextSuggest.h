//
//  ITextSuggest.h
//  TCSMBiOS
//
//  Created by v.y.ignatov on 26/05/2016.
//  Copyright © 2016 АО «Тинькофф Банк», лицензия ЦБ РФ № 2673. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol ITextSuggest <NSObject>

- (NSString *)title;
- (NSString *)subtitle;
- (UIImage *)accessoryImage;
- (NSString *)value;
- (NSDictionary *)userInfo;

@optional
- (UIFont *)titleFont;
- (UIColor *)titleColor;

- (UIFont *)subtitleFont;
- (UIColor *)subtitleColor;

@end
