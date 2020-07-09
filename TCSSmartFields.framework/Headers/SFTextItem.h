//
//  SFTextItem.h
//  TCSMBiOS
//
//  Created by v.y.ignatov on 12/05/2016.
//  Copyright © 2016 АО «Тинькофф Банк», лицензия ЦБ РФ № 2673. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SFBaseItem.h"
#import "ISuggestProvider.h"
#import "ISmartTextFormatter.h"

@interface SFTextItem : SFBaseItem

@property (nonatomic, assign) UIKeyboardType keyboardType;
@property (nonatomic, strong) NSString *hint;
@property (nonatomic, assign) BOOL isLoading;
@property (nonatomic, strong) UIImage *imageHint;
@property (nonatomic, assign) UIViewContentMode imageHintContentMode;
@property (nonatomic, strong) NSString *placeholder;
@property (nonatomic, strong) NSString *mask; // Ex: __.__.____
@property (nonatomic, assign) BOOL constrainToMask;
@property (nonatomic, assign) UITextAutocapitalizationType autocapitalizationType;
@property (nonatomic, assign) BOOL isHintAlwaysVisible;
@property (nonatomic, strong) NSNumber *maxLength;

@end
