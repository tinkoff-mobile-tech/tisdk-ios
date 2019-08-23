//
//  TIOsagoPrefillData.h
//  TISDK
//
//  Created by k.tukaev on 20/02/2019.
//

#import <Foundation/Foundation.h>

@class TIVehicleComponents;

NS_SWIFT_NAME(OsagoPrefillData)
@interface TIOsagoPrefillData : NSObject

/**
 * Компоненты автомобиля(марка, модель, год выпуска, кузов, коробка передач, двигатель)
 */
@property (strong, nonatomic, nullable) TIVehicleComponents *vehicleComponents;

/**
 * Регистрационный номер ТС. Передается в формате: А111АА11
 */
@property (copy, nonatomic, nullable) NSString *registrationNumber;

/**
 * Номер СТС.
 */
@property (copy, nonatomic, nullable) NSString *documentSeriesNumber;

/**
 * Номер ВУ. Передается в формате: 11 11 111111
 */
@property (copy, nonatomic, nullable) NSString *driverLicenseSeriesAndNumber;

/**
 * Мобильный телефон пользователя. Передается в формате: 9998887766
 */
@property (copy, nonatomic, nullable) NSString *phone;

/**
 * Email пользователя
 */
@property (copy, nonatomic, nullable) NSString *email;

/**
 * ФИО пользователя
 */
@property (copy, nonatomic, nullable) NSString *lastName;
@property (copy, nonatomic, nullable) NSString *firstName;
@property (copy, nonatomic, nullable) NSString *patronymic;

@end
