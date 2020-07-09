//
//  ISmartTextEditor.h
//  TCSSmartFields
//
//  Created by k.a.nepomnyashciy on 21.02.17.
//  Copyright © 2017 ru.tcsbank. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SmartItemBehaviour.h"

@protocol ISmartTextEditor <SmartItemBehaviour>

- (BOOL)shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString *)string textView:(id <UITextInput> )textView;
- (NSString *)rawValue:(NSString *)string;

@optional
@property (assign, nonatomic) BOOL shouldDisableInputNextCharacters;

@end
