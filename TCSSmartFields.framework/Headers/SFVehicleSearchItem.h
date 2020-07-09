//
// Created by i.v.vasilenko on 26/05/2017.
// Copyright (c) 2017 ru.tcsbank. All rights reserved.
//

#import "SFBaseItem.h"

@class SFVehicleSearchItemResult;
@class SFVehicleSearchFieldComponent;

@interface SFVehicleSearchItem : SFBaseItem

// Default: UINT_MAX
@property (assign, nonatomic) NSUInteger numberOfSteps;
@property (strong, nonatomic) NSArray <SFVehicleSearchFieldComponent *> *selectedComponents;
// Default: " "
@property (copy, nonatomic) NSString *componentsSeparator;

@property (nonatomic, assign) UIKeyboardType keyboardType;
@property (nonatomic, strong) NSString *hint;
@property (nonatomic, strong) UIImage *imageHint;
@property (nonatomic, assign) UIViewContentMode imageHintContentMode;
@property (nonatomic, strong) NSString *placeholder;
@property (nonatomic, assign) UIKeyboardAppearance keyboardAppearance;
@property (nonatomic, assign) UITextAutocapitalizationType autocapitalizationType;

@end
