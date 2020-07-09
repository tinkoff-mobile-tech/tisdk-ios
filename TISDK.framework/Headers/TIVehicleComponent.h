//
// Created by i.v.vasilenko on 11/07/2018.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Информация о компоненте авто
 */
@protocol TIVehicleComponent <NSObject>

/**
 * id компонента
 */
@property (copy, nonatomic, readonly, nullable) NSString *identifier;
/**
 * Название компонента
 */
@property (copy, nonatomic, readonly) NSString *partName;

@end

NS_ASSUME_NONNULL_END
