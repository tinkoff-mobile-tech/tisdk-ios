//
//  SFBaseItem.h
//  TCSMBiOS
//
//  Created by v.y.ignatov on 12/05/2016.
//  Copyright © 2016 АО «Тинькофф Банк», лицензия ЦБ РФ № 2673. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "SmartItemBehaviour.h"
#import "ISuggestProvider.h"

///абстрактный класс, нужно использовать конкретного наследника для нужного отображения
@interface SFBaseItem : NSObject

///все сложное поведение поля спрятано в поведения в зависимости от набора которых будет меняться поведения поля(например показ сагжестов и валидация)

- (void)addBehaviour:(nonnull id<SmartItemBehaviour>)behaviour;
- (nullable id<SmartItemBehaviour>)behaviourForProtocol:(nonnull Protocol *)aProtocol;

// Базовые проперти относящиеся ко всем smart item
@property (nonatomic, strong, nullable) NSString *text;
@property (nonatomic, strong, nullable) NSString *title;

@end
