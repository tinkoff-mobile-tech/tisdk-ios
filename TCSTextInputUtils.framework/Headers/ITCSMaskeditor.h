//
//  ITCSMaskeditor.h
//  TCSTextInputUtils
//
//  Created by k.a.nepomnyashciy on 20.12.16.
//  Copyright © 2016 Tinkoff Bank. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol ITCSMaskEditor <NSObject>


- (BOOL)shouldChangeCharactersInRange:(NSRange)range
                    replacementString:(NSString *)string
                            textField:(UITextField *)textField
                                 mask:(NSString *)mask;

- (BOOL)shouldChangeCharactersInRange:(NSRange)range
                    replacementString:(NSString *)string
                             textView:(UITextView *)textView
                                 mask:(NSString *)mask;

- (BOOL)shouldChangeCharactersInRange:(NSRange)range
                    replacementString:(NSString *)string
                            textField:(UITextField *)textField
                          currentMask:(NSString *)currentMask
                              newMask:(NSString *)newMask;

- (BOOL)shouldChangeCharactersInRange:(NSRange)range
                    replacementString:(NSString *)string
                             textView:(UITextView *)textView
                          currentMask:(NSString *)currentMask
                              newMask:(NSString *)newMask;

- (NSString *)rawStringFromString:(NSString *)string mask:(NSString *)mask;
- (NSString *)maskedStringFromString:(NSString *)string mask:(NSString *)mask;
- (NSUInteger)maxRawCharactersNumberForMask:(NSString *)mask;

/// Проверка соответствует ли текст @parameter text маске @paramreter mask
- (BOOL)isText:(NSString *)text confirmMask:(NSString *)mask;

/// @param checkLenght Если true будет учитываться длина строки относительно длине маски
- (BOOL)isText:(NSString *)text confirmMask:(NSString *)mask checkLenght:(BOOL)checkLenght;

@end

