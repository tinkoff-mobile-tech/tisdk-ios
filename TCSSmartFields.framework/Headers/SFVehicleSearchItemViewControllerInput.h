//
// Created by i.v.vasilenko on 29/05/2017.
// Copyright (c) 2017 ru.tcsbank. All rights reserved.
//

#import <Foundation/Foundation.h>

@import TinkoffUIKit;

@protocol SFVehicleSearchItemViewControllerInput <NSObject>

/**
 * Информируем о том, что ушел запрос в API для загрузки саджестов
 * @author Igor Vasilenko
 */
- (void)didUpdateSuggestsWithError:(SFSuggestError *)error;

/**
 * Информируем о том, что требуется добавить новый тег
 * @param tag - тег, который нужно добавить в коллекцию тегов
 * @author Igor Vasilenko
 */
- (void)didRequiresAddTag:(id <TCSTagProtocol>)tag;

/**
 * Информируем о том, что требуется добавить список тегов
 * @param tags - массив тегов, который нужно добавить в коллекцию тегов
 * @author Igor Vasilenko
 */
- (void)didRequiresAddTags:(NSArray <id <TCSTagProtocol>> *)tags;

/**
 * Информируем о том, что требуется удалить тег
 * @param tag - тег, который нужно удалить из коллекции тегов
 * @author Igor Vasilenko
 */
- (void)didRequiresRemoveTag:(id <TCSTagProtocol>)tag;

@end
