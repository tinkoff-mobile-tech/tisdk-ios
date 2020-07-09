//
//  SFListItem.h
//  TCSMBiOS
//
//  Created by v.y.ignatov on 12/05/2016.
//  Copyright © 2016 АО «Тинькофф Банк», лицензия ЦБ РФ № 2673. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SFBaseItem.h"
#import "SFListElement.h"

@interface SFListItem : SFBaseItem

@property (nonatomic, strong) NSNumber *selectedValue;
@property (nonatomic, strong) NSArray<SFListElement *>* values;
@property (nonatomic, strong) NSAttributedString *hint;

@end
