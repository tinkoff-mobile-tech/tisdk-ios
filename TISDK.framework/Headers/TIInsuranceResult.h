//
//  TIInsuranceResult.h
//  TISDK
//
//  Created by k.tukaev on 30/05/2019.
//

#import <Foundation/Foundation.h>

@class TIPolicyInfo;

NS_ASSUME_NONNULL_BEGIN

@interface TIInsuranceResult : NSObject

@property(strong, nonatomic, nullable) TIPolicyInfo *policyInfo;
@property(assign, nonatomic) BOOL isNoNeedInsurancePolicyPressed;

@end

NS_ASSUME_NONNULL_END
