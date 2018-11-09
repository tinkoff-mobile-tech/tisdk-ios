//
// Copyright (c) 2018 TCS Bank
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Тип полиса
 */
typedef NS_ENUM(NSUInteger, TIPolicyType) {
    TIPolicyTypeOSAGO /* ОСАГО */,
    TIPolicyTypeKACKO /* КАСКО */
};

/**
 * Информация о полисе
 */
__attribute__((objc_subclassing_restricted))
@interface TIPolicyInfo : NSObject

/**
 * Тип полиса
 */
@property (assign, nonatomic, readonly) TIPolicyType type;
/**
 * Дата начала действия полиса
 */
@property (strong, nonatomic, readonly) NSDate *effectiveDate;
/**
 * Дата окончания действия полиса
 */
@property (strong, nonatomic, readonly) NSDate *expireDate;
/**
 * Номер заказа
 */
@property (copy, nonatomic, readonly) NSString *orderId;
/**
 * Серия и номер СТС (если был выбран СТС в качестве документа авто)
 */
@property (copy, nonatomic, readonly, nullable) NSString *seriesAndNumberCTC;
/**
 * Серия и номер ПТС (если был выбран ПТС в качестве документа авто)
 */
@property (copy, nonatomic, readonly, nullable) NSString *seriesAndNumberPTC;

@end

NS_ASSUME_NONNULL_END
