//
// Created by i.v.vasilenko on 11/07/2018.
//

#import <Foundation/Foundation.h>

@protocol TIVehicleComponent;

NS_ASSUME_NONNULL_BEGIN

/**
 * Информация об автомобиле
 */
@interface TIVehicleComponents <__covariant ObjectType: id <TIVehicleComponent>>: NSObject

/**
 * Марка
 */
@property (strong, nonatomic, nullable) ObjectType maker;
/**
 * Модель
 */
@property (strong, nonatomic, nullable) ObjectType model;
/**
 * Год выпуска
 */
@property (strong, nonatomic, nullable) ObjectType year;
/**
 * Кузов
 */
@property (strong, nonatomic, nullable) ObjectType autoBox;
/**
 * Двигатель
 */
@property (strong, nonatomic, nullable) ObjectType engine;
/**
 * Коробка передач
 */
@property (strong, nonatomic, nullable) ObjectType geerBox;

@end

NS_ASSUME_NONNULL_END
