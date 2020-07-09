//
//  SFSuggestError.h
//  TCSSmartFields
//
//  Created by v.y.ignatov on 29/03/2016.
//  Copyright © 2016 ru.tcsbank. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, SuggestProvierErrorCode)
{
    SuggestProvierErrorCodeUnknown = 0,
    SuggestProvierErrorCodeNoContactsAccess,
    SuggestProvierErrorCodeNoSuggestFound,
};

@interface SFSuggestError : NSObject

- (instancetype)initWithErrorMessage:(NSString *)message errorCode:(SuggestProvierErrorCode)code;

- (NSString *)message;
- (SuggestProvierErrorCode)errorCode;

@end
