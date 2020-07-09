//
//  MBSmartFieldView.h
//  TCSMBiOS
//
//  Created by Ampilogov Vitaly on 09/03/16.
//  Copyright © 2016 “Tinkoff Credit Systems” Bank (closed joint-stock company). All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ISmartTextFormatter.h"
#import "ISmartTextResolver.h"
#import "ISmartTextMaskDetector.h"
#import "ISmartTextEditor.h"
#import "ISmartTextAdditionalSymbolProvider.h"
#import "ISmartTextInputHandler.h"
#import "SFDesign.h"

@protocol SFInputViewDelegate <NSObject>

- (void)SFInputViewTextChanged:(null_unspecified NSString *)text; //return unmasked text

@end

@interface SFInputView: UIView <SFDesignable>

@property (strong, nonatomic, null_unspecified) NSString *text;                   //ex: @"+7(999) 123-54-64"
@property (strong, nonatomic, null_unspecified) NSString *unmaskedText;           //ex: 9991235464
@property (strong, nonatomic, null_unspecified) NSString *mask;                   //ex: @"+_(___) ___-__-__"
@property (assign, nonatomic) BOOL constrainToMask;             //if YES - forbid input when mask filled, else - allows input, but don't apply mask
@property (strong, nonatomic, null_unspecified) id<ISmartTextFormatter> formatter;
@property (strong, nonatomic, null_unspecified) id<ISmartTextResolver> resolver;
@property (strong, nonatomic, null_unspecified) id<ISmartTextMaskDetector> maskDetector;
@property (strong, nonatomic, null_unspecified) id<ISmartTextEditor> textEditor;
@property (strong, nonatomic, null_unspecified) id<ISmartTextAdditionalSymbolProvider> additionalSymbolProvider;
@property (strong, nonatomic, null_unspecified) id<ISmartTextInputHandler> inputHandler;
@property (assign, nonatomic) BOOL isIndicatorHidden;
@property (assign, nonatomic, null_unspecified) NSNumber *maxLength;

- (void)verifyTextByMask; //соответствует ли текст маске, если нет то текст очищается

//configuration
- (void)configWithMaxHeight:(CGFloat)maxHeight;

//proxy properties
@property (nonatomic, strong, null_unspecified) NSString *title;
@property (nonatomic, strong, null_unspecified) NSString *placeholder;
@property (nonatomic, assign) UIKeyboardType keyboardType;
@property (nonatomic, assign) UITextAutocapitalizationType autocapitalizationType;
@property (nonatomic, assign) UIReturnKeyType returnType;

@property (weak, nonatomic, nullable) IBOutlet id<SFInputViewDelegate> delegate;

- (void)applyDesign:(nonnull id<SFDesignProtocol>)design;

@end
