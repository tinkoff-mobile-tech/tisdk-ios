//
//  IDetailedSuggest.h
//  TCSSmartFields
//
//  Created by n.sidiropulo on 12/04/2018.
//  Copyright © 2018 ru.tcsbank. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "ICountrySuggest.h"

@protocol IDetailedSuggest <ITextSuggest>

@property (nonatomic, copy) CountrySuggestImageSetter iconImageSetter;
@property (nonatomic, copy) CountrySuggestImageSetter accessoryImageSetter;
@property (nonatomic, assign) BOOL shouldGoNextAfterSelection;
@property (nonatomic, assign) BOOL isLoading;

@end
