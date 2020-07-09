//
//  SFValidatorResult.h
//  TCSMBiOS
//
//  Created by Ampilogov Vitaly on 27/05/16.
//  Copyright © 2016 АО «Тинькофф Банк», лицензия ЦБ РФ № 2673. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SFValidatorResult : NSObject

@property (assign, nonatomic, readonly) BOOL isValid;
@property (strong, nonatomic, readonly) NSString *errorMessage;

//Convinince init
+ (instancetype)invalidResult;      //isValid = NO
+ (instancetype)validResult;        //isValid = YES
- (instancetype)initWithValid:(BOOL)isValid;

//Disagnated init
- (instancetype)initWithMessage:(NSString *)message isValid:(BOOL)isValid;

@end
