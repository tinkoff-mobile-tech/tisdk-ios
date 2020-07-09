//
//  TIInsuranceResult.h
//  TISDK
//
//  Created by k.tukaev on 30/05/2019.
//

#import <Foundation/Foundation.h>

@class TIPolicyInfo;

NS_ASSUME_NONNULL_BEGIN

/**
 * Результат покупки полиса
 */
@interface TIInsuranceResult : NSObject

/**
 * Информация о полисе
 */
@property(strong, nonatomic, nullable) TIPolicyInfo *policyInfo;

/**
 * Будет установлен в true, если юзер нажал на кнопку "Полис не нужен"
 */
@property(assign, nonatomic) BOOL isNoNeedInsurancePolicyPressed;

@end

NS_ASSUME_NONNULL_END
