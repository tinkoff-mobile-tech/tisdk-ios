//
// Created by i.v.vasilenko on 29/05/2017.
// Copyright (c) 2017 ru.tcsbank. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ISmartTextEditor.h"

@import TinkoffUIKit;

@class SFSuggestError;
@class SFVehicleSearchFieldComponent;
@protocol ITextSuggest;

NS_ASSUME_NONNULL_BEGIN

@protocol IVehicleSearchItemInteractor

/**
 * Текущие саджесты
 * @author Igor Vasilenko
 */
@property (copy, nonatomic, readonly, nullable) NSArray <id <ITextSuggest>> *suggests;

/**
 * Информируем об изменении текста
 * @author Igor Vasilenko
 */
- (void)didChangeText:(nullable NSString *)text;

/**
 * Информируем о том, что был добавлен тег
 * @author Igor Vasilenko
 * @param tag - тег
 */
- (void)didAddTag:(id <TCSTagProtocol>)tag;

/**
 * Информируем о том, что был удален тег
 * @author Igor Vasilenko
 * @param tag - тег
 */
- (void)didRemoveTag:(id <TCSTagProtocol>)tag;

/**
 * Валидация тега
 * @author Igor Vasilenko
 */
 - (BOOL)shouldVerifyTagWithText:(NSString *)tagText;

/**
 * Текущие выбранные компоненты из саджестов
 * @author Igor Vasilenko
 */
- (NSArray <SFVehicleSearchFieldComponent *> *)currentSelectedComponents;

/**
 * Текущий текст из выбранных саджестов
 * @author Igor Vasilenko
 */
 - (nullable NSString *)currentTextSelectedComponents;

/**
 * Был выбран саджест из списка
 * @author Igor Vasilenko
 */
- (void)didSelectSuggestAtIndex:(NSUInteger)suggestIndex;

/**
* Информируем о том, что мы нуждаемся в апдейте саджестов для закешированного текста
* @author Igor Vasilenko
*/
- (void)needsReloadSuggests;

@end

NS_ASSUME_NONNULL_END
