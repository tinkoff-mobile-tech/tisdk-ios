//
//  TIKackoPrefillData.h
//  TISDK
//
//  Created by m.kogan on 29.10.2019.
//

#import <Foundation/Foundation.h>

@class TIVehicleComponents;

NS_SWIFT_NAME(KaskoPrefillData)
/**
 * Данные для предзаполнения полей при покупке полиса "ОСАГО"
 */
@interface TIKackoPrefillData : NSObject

/**
 * Компоненты автомобиля (марка, модель, год выпуска, кузов, коробка передач, двигатель)
 */
@property (strong, nonatomic, nullable) TIVehicleComponents *vehicleComponents;

/**
 * Мобильный телефон пользователя. Передается в формате: 9998887766
 */
@property (copy, nonatomic, nullable) NSString *phone;

/**
 * Фамилия водителя
 */
@property (copy, nonatomic, nullable) NSString *lastName;
/**
 * Имя водителя
 */
@property (copy, nonatomic, nullable) NSString *firstName;
/**
 * Отчество водителя
 */
@property (copy, nonatomic, nullable) NSString *patronymic;

@end
