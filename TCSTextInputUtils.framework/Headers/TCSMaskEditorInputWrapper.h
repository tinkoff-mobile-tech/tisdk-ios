//
//  TCSMaskEditorInputWrapper.h
//  TCSTextInputUtils
//
//  Created by k.a.nepomnyashciy on 20.01.17.
//
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, TCSMaskEditorInputType)
{
    TCSMaskEditorInputTypeTextField,
    TCSMaskEditorInputTypeTextView,
    TCSMaskEditorTypeUndefined
};

/// Internal class. Wraps UITextField and UITextView for unified
/// access to @property text and @method didChange
@interface TCSMaskEditorInputWrapper : NSObject

@property (nonatomic, assign) TCSMaskEditorInputType type;

- (instancetype)initWithInputView:(id <UITextInput>)inputView;
- (instancetype)init NS_UNAVAILABLE;

// Wrapped properties

@property (nonatomic, readwrite) NSString *text;

// Wrapped methods

- (void)didChange;

@end
