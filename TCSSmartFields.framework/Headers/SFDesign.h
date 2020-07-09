//
//  SFDesign.h
//  TCSMBiOS
//
//  Created by Ampilogov Vitaly on 25/03/16.
//  Copyright © 2016 “Tinkoff Credit Systems” Bank (closed joint-stock company). All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SFDesignProtocol.h"

@class SFDesign;

@protocol SFDesignable <NSObject>
@property (nonatomic, strong, nullable) id<SFDesignProtocol> design;

@optional
- (void)applyDesign:(nonnull id<SFDesignProtocol>)design;

@end

@interface SFDesign : NSObject <SFDesignProtocol>

+ (instancetype _Nonnull )shared;

//Основной цвет (фон, бар)
@property (strong, nonatomic, nullable) UIColor *bgColor;
@property (assign, nonatomic) CGFloat bgAlpha;

//Цвет фона вводимого поля
@property (strong, nonatomic, nullable) UIColor *inputBgColor;

//Цвет фона с прозрачностью
@property (strong, nonatomic, nullable) UIColor *opaqueBgColor;

//Основной цвет текста
@property (strong, nonatomic, nullable) UIColor *textColor;

//Цвет разделителей в многострочных подсказках
@property (strong, nonatomic, nullable) UIColor *separatorColor;

//Основной цвет заголовков
@property (strong, nonatomic, nullable) UIColor *titleColor;

//Основной цвет плейсхолдеров
@property (strong, nonatomic, nullable) UIColor *placeholderColor;

//Цвет заголовка поля ввода
@property (strong, nonatomic, nullable) UIColor *inputTitleColor;

//Цвет текста поля ввода
@property (strong, nonatomic, nullable) UIColor *inputTextColor;

//Цвет подсказки
@property (strong, nonatomic, nullable) UIColor *hintColor;

//Цвет подсветки
@property (strong, nonatomic, nullable) UIColor *highlightColor;

//Цвет клавиатуры
/// Стандартное значение свойста UIKeyboardAppearanceDark
@property (assign, nonatomic) UIKeyboardAppearance keyboardAppearance;

//Основной цвет кнопок
@property (strong, nonatomic, nullable) UIColor *mainButtonColor;
@property (strong, nonatomic, nullable) UIColor *mainButtonTintColor;

//Цвет текста активной ячейки списка
@property (strong, nonatomic, nullable) UIColor *listTextColorEnabled;
@property (strong, nonatomic, nullable) UIColor *listCheckIconTintColor;

//Цвет фона ячейки списка
@property (strong, nonatomic, nullable) UIColor *listCellBackgroundColor;
@property (strong, nonatomic, nullable) UIColor *listCellHighlightBackgroundColor;

//Цвет фона заголовка в списке
@property (strong, nonatomic, nullable) UIColor *listHeaderBackgroundColor;

//Цвет текста заголовка в списке
@property (strong, nonatomic, nullable) UIColor *listHeaderTextColor;

//Стиль сепараторов в списке
@property (assign, nonatomic) UITableViewCellSeparatorStyle listSeparatorStyle;

//Цвет текста неактивной ячейки списка
@property (strong, nonatomic, nullable) UIColor *listTextColorDisabled;

//Цвет текста выбранной ячейки списка опций
@property (strong, nonatomic, nullable) UIColor *optionsTextColorSelected;

//Цвет текста ячейки списка опций
@property (strong, nonatomic, nullable) UIColor *optionsTextColorNormal;

//Цвет текста неактивной ячейки списка опций
@property (strong, nonatomic, nullable) UIColor *optionsTextColorDisabled;

//Цвет текста suggest'ов
@property (strong, nonatomic, nullable) UIColor *suggestTextColor;
@property (strong, nonatomic, nullable) UIColor *suggestSubtitleColor;

//Цвет дополнительных элементов
@property (strong, nonatomic, nullable) UIColor *accessoryColor;

//Цвет активити индикатора
@property (strong, nonatomic, nullable) UIColor *activityIndicatorColor;

//Цвет текста спреда
@property (strong, nonatomic, nullable) UIColor *spreadTextColor;

//Цвет текста активного спреда
@property (strong, nonatomic, nullable) UIColor *usedSpreadTextColor;

//Цвет текста заголовков
@property (strong, nonatomic, nullable) UIColor *headerTextColor;

//Цвет кнопки Назад
@property (strong, nonatomic, nullable) UIColor *backButtonColor;
@property (strong, nonatomic, nullable) UIColor *backButtonTintColor;
@property (strong, nonatomic, nullable) UIColor *backButtonBorderColor;
@property (assign, nonatomic) CGFloat inactiveBackButtonAlpha;

//Цвет фона круглой кнопки
@property (strong, nonatomic, nullable) UIColor *roundButtonBgColor;

//Цвет бордера круглой кнопки
@property (strong, nonatomic, nullable) UIColor *roundButtonBorderColor;

//Цвет фона контейнера шагов
@property (strong, nonatomic, nullable) UIColor *stepBgColor;

//Цвет прогресса
@property (strong, nonatomic, nullable) UIColor *progressColor;

//Цвет фона прогресса
@property (strong, nonatomic, nullable) UIColor *progressBgColor;

//Цвет кнопок в checkbox
@property (strong, nonatomic, nullable) UIColor *nonSelectedCheckboxColor;
@property (strong, nonatomic, nullable) UIColor *checkboxButtonColor;

// Цвет фона ячейки фото в PhotoItem
@property (strong, nonatomic, nullable) UIColor *photoCellBgColor;

//Цвета в пикере
@property (strong, nonatomic, nullable) NSArray<UIColor *> *colorsForPicker;

// Цвет тегов в обычном состоянии
@property (strong, nonatomic, nullable) UIColor *tagsBackgroundColor;

// Цвет тегов в нажатом состоянии
@property (strong, nonatomic, nullable) UIColor *tagsSelectedBackgroundColor;

// Цвет текста для тегов в обычном состоянии
@property (strong, nonatomic, nullable) UIColor *tagsTextColor;

// Цвет текста для тегов в нажатом состоянии
@property (strong, nonatomic, nullable) UIColor *tagsSelectedTextColor;

// Цвет фона иконки хинта
@property (strong, nonatomic, nullable) UIColor *hintIconBackgroundColor;

// Цвет фона хинта
@property (strong, nonatomic, nullable) UIColor *hintBackgroundColor;

//Цвет текста для ссылки
@property (strong, nonatomic, nullable) UIColor *linkTextColor;

//Цвет верхней строчки в SumInputNavigationView
@property (strong, nonatomic, nullable) UIColor *titleSumInputNavigationViewColor;

//Цвет нижней строчки в SumInputNavigationView
@property (strong, nonatomic, nullable) UIColor *labelSumInputNavigationViewColor;

//Цвет контента у SFZeroDataView
@property(strong, nonatomic, nullable) UIColor *zeroDataViewContentColor;

//Шрифты
@property(strong, nonatomic, nullable) UIFont *titleFont;
@property(strong, nonatomic, nullable) UIFont *textItemTitleFont;
@property(strong, nonatomic, nullable) UIFont *textItemTextFont;
@property(strong, nonatomic, nullable) UIFont *hintFont;
@property(strong, nonatomic, nullable) UIFont *hintItemTextFont;
@property(strong, nonatomic, nullable) UIFont *hintItemTitleFont;
@property(strong, nonatomic, nullable) UIFont *subtitleListItemTitleFont;
@property(strong, nonatomic, nullable) UIFont *subtitleListItemSubtitleFont;
@property(strong, nonatomic, nullable) UIFont *checkboxItemButtonFont;

@end
