//
//  ISmartValidator.h
//  TCSMBiOS
//
//  Created by Ampilogov Vitaly on 05/04/16.
//  Copyright © 2016 “Tinkoff Credit Systems” Bank (closed joint-stock company). All rights reserved.
//

#import "SmartItemBehaviour.h"
#import "SFValidatorResult.h"

@protocol ISmartValidator <SmartItemBehaviour>

- (SFValidatorResult *)validateData:(id)data;

- (SFValidatorResult *)currentResult;
- (void)setCurrentResult:(SFValidatorResult *)result;

@end
