//
//  ICountrySuggest.h
//  TCSSmartFields
//
//  Created by g.novik on 27.07.17.
//  Copyright © 2017 ru.tcsbank. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ITextSuggest.h"

typedef void (^CountrySuggestImageSetter)(UIImageView *imageView);

@protocol ICountrySuggest <ITextSuggest>

@property (nonatomic, copy) CountrySuggestImageSetter imageSetter;

@end


