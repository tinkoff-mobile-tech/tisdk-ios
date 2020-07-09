//
//  SFBoolItem.h
//  TCSMBiOS
//
//  Created by v.y.ignatov on 26/05/2016.
//  Copyright © 2016 АО «Тинькофф Банк», лицензия ЦБ РФ № 2673. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "SFBaseItem.h"
#import "SFCheckboxItemLink.h"

typedef NS_ENUM(NSUInteger, SFCheckboxItemSelectioState)
{
    SFCheckboxItemSelectioStateDefault,
    SFCheckboxItemSelectioStatePositive,
    SFCheckboxItemSelectioStateNegative
};

@interface SFCheckboxItem : SFBaseItem

@property (nonatomic, assign) SFCheckboxItemSelectioState selectedValue;

@property (nonatomic, strong) NSString *positiveValue;
@property (nonatomic, strong) NSString *negativeValue;
@property (nonatomic, strong) NSString *hintText;

@property (nonatomic, strong) NSAttributedString *attributedTitle;
@property (nonatomic, strong) SFCheckboxItemLink *itemLink;

@end
