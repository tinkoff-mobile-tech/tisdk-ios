//
// Created by i.v.vasilenko on 29/05/2017.
// Copyright (c) 2017 ru.tcsbank. All rights reserved.
//

#import <Foundation/Foundation.h>
@import TinkoffUIKit;

@protocol ITextSuggest;

NS_ASSUME_NONNULL_BEGIN

@interface SFVehicleSearchFieldComponent : NSObject

@property (copy, nonatomic) NSString *text;
@property (assign, nonatomic) NSUInteger stepIndex;
@property (strong, nonatomic, nullable) id <TCSTagProtocol> tag;
@property (strong, nonatomic) id <ITextSuggest> suggest;

@end

NS_ASSUME_NONNULL_END
