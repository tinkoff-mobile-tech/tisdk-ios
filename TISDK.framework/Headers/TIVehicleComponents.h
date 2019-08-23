//
// Created by i.v.vasilenko on 11/07/2018.
//

#import <Foundation/Foundation.h>

@protocol TIVehicleComponent;

NS_ASSUME_NONNULL_BEGIN

@interface TIVehicleComponents <__covariant ObjectType: id <TIVehicleComponent>>: NSObject

@property (strong, nonatomic, nullable) ObjectType maker;
@property (strong, nonatomic, nullable) ObjectType model;
@property (strong, nonatomic, nullable) ObjectType year;
@property (strong, nonatomic, nullable) ObjectType autoBox;
@property (strong, nonatomic, nullable) ObjectType engine;
@property (strong, nonatomic, nullable) ObjectType geerBox;

@end

NS_ASSUME_NONNULL_END
