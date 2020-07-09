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

@class TIVehicleLicense;
@class TIDriverLicense;
@class TIVehicleComponents;
@class TIFioSuggestData;

@protocol TIVehicleComponent;

NS_ASSUME_NONNULL_BEGIN

/**
 * Тип полиса
 */
typedef NS_ENUM(NSUInteger, TIPolicyType) {
    /**
     * ОСАГО
     */
    TIPolicyTypeOSAGO,
    /**
     * КАСКО
     */
    TIPolicyTypeKACKO 
};

/**
 * Информация о полисе
 */
__attribute__((objc_subclassing_restricted))
@interface TIPolicyInfo : NSObject
/**
 * Email страхователя
 */
@property (strong, nonatomic, nonnull) NSString *email;
/**
 * Мобильный телефон страхователя
 */
@property (strong, nonatomic, nonnull) NSString *phone;
/**
 * ФИО страхователя
 */
@property (strong, nonatomic, nonnull) TIFioSuggestData *insurerFio;
/**
 * ФИО владельца
 */
@property (strong, nonatomic, nonnull) TIFioSuggestData *ownerFio;
/**
 * Название страховой компании
 */
@property (strong, nonatomic, nonnull) NSString *insuranceCompanyTitle;
/**
 * Номер страхового полиса
 */
@property (strong, nonatomic, nonnull) NSString *policyNumber;
/**
 * Тип полиса
 */
@property (assign, nonatomic) TIPolicyType type;
/**
 * Дата начала действия полиса
 */
@property (strong, nonatomic, nonnull) NSDate *effectiveDate;
/**
 * Дата окончания действия полиса
 */
@property (strong, nonatomic, nonnull) NSDate *expireDate;
/**
 * Номер заказа
 */
@property (copy, nonatomic, nonnull) NSString *orderId;
/**
 * Массив ВУ. Опциональный массив т.к. в случае страховки без ограничений, пользователь не вводил ни одного ВУ.
 */
@property (strong, nonatomic, nullable) NSArray <TIDriverLicense *> *driverLicenses;
/**
 * Номер CТС
 */
@property (copy, nonatomic, nullable) NSString *vehicleLicenseNumber;
/**
 * Номер ПТС
 */
@property (copy, nonatomic, nullable) NSString *ptsNumber;
/**
 * Регистрационный знак ТС
 */
@property (copy, nonatomic, nonnull) NSString *licensePlateNumber;
/**
 * Информация об автомобиле
 */
@property (strong, nonatomic, nonnull) TIVehicleComponents *vehicleComponents;

@end

NS_ASSUME_NONNULL_END
