//
//  SFDesignProtocol.h
//  TCSSmartFields
//
//  Created by e.orlova on 12.02.18.
//  Copyright © 2018 ru.tcsbank. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol SFDesignProtocol

//Основной цвет (фон, бар)
@property (strong, nonatomic, nullable, readonly) UIColor *bgColor;
@property (assign, nonatomic, readonly) CGFloat bgAlpha;

//Цвет фона с прозрачностью
@property (strong, nonatomic, nullable, readonly) UIColor *opaqueBgColor;

//Цвет фона вводимого поля
@property (strong, nonatomic, nullable) UIColor *inputBgColor;

//Основной цвет текста
@property (strong, nonatomic, nullable, readonly) UIColor *titleColor;
@property (strong, nonatomic, nullable, readonly) UIColor *textColor;
@property (strong, nonatomic, nullable, readonly) UIColor *placeholderColor;

//Цвет поля ввода
@property (strong, nonatomic, nullable, readonly) UIColor *inputTitleColor;
@property (strong, nonatomic, nullable, readonly) UIColor *inputTextColor;

//Цвет подсказки
@property (strong, nonatomic, nullable, readonly) UIColor *hintColor;

//Цвет подсветки
@property (strong, nonatomic, nullable, readonly) UIColor *highlightColor;

//Цвет клавиатуры
/// Стандартное значение свойста UIKeyboardAppearanceDark
@property (assign, nonatomic) UIKeyboardAppearance keyboardAppearance;

//Цвет дополнительных элементов
@property (strong, nonatomic, nullable, readonly) UIColor *accessoryColor;

//Основной цвет кнопок
@property (strong, nonatomic, nullable, readonly) UIColor *mainButtonColor;
@property (strong, nonatomic, nullable, readonly) UIColor *mainButtonTintColor;

//Цвет текста активной ячейки списка
@property (strong, nonatomic, nullable, readonly) UIColor *listTextColorEnabled;

//Цвет текста неактивной ячейки списка
@property (strong, nonatomic, nullable, readonly) UIColor *listTextColorDisabled;

//Цвет текста выбранной ячейки списка опций
@property (strong, nonatomic, nullable, readonly) UIColor *optionsTextColorSelected;

//Цвет текста ячейки списка опций
@property (strong, nonatomic, nullable, readonly) UIColor *optionsTextColorNormal;

//Цвет текста неактивной ячейки списка опций
@property (strong, nonatomic, nullable, readonly) UIColor *optionsTextColorDisabled;
    
//Цвет текста suggest'ов
@property (strong, nonatomic, nullable, readonly) UIColor *suggestTextColor;
@property (strong, nonatomic, nullable, readonly) UIColor *suggestSubtitleColor;

//Цвет текста спреда
@property (strong, nonatomic, nullable, readonly) UIColor *spreadTextColor;

//Цвет текста активного спреда
@property (strong, nonatomic, nullable, readonly) UIColor *usedSpreadTextColor;

//Цвет кнопки Назад
@property (strong, nonatomic, nullable, readonly) UIColor *backButtonColor;
@property (strong, nonatomic, nullable, readonly) UIColor *backButtonTintColor;
@property (strong, nonatomic, nullable, readonly) UIColor *backButtonBorderColor;
@property (assign, nonatomic, readonly) CGFloat inactiveBackButtonAlpha;

//Цвет фона круглой кнопки
@property (strong, nonatomic, nullable) UIColor *roundButtonBgColor;

//Цвет бордера круглой кнопки
@property (strong, nonatomic, nullable) UIColor *roundButtonBorderColor;

//Цвет фона контейнера шагов
@property (strong, nonatomic, nullable, readonly) UIColor *stepBgColor;

//Цвет прогресса
@property (strong, nonatomic, nullable, readonly) UIColor *progressColor;

//Цвет фона прогресса
@property (strong, nonatomic, nullable, readonly) UIColor *progressBgColor;

//Цвет кнопок в checkbox
@property (strong, nonatomic, nullable, readonly) UIColor *nonSelectedCheckboxColor;
@property (strong, nonatomic, nullable, readonly) UIColor *checkboxButtonColor;

// Цвет фона ячейки фото в PhotoItem
@property (strong, nonatomic, nullable, readonly) UIColor *photoCellBgColor;

//Цвета в пикере
@property (strong, nonatomic, nullable, readonly) NSArray<UIColor *> *colorsForPicker;


//Шрифты
@property (strong, nonatomic, nullable, readonly) UIFont *titleFont;
@property (strong, nonatomic, nullable, readonly) UIFont *hintFont;

@property (strong, nonatomic, nullable, readonly) UIFont *hintItemTitleFont;
@property (strong, nonatomic, nullable, readonly) UIFont *hintItemTextFont;

@property (strong, nonatomic, nullable, readonly) UIFont *subtitleListItemTitleFont;
@property (strong, nonatomic, nullable, readonly) UIFont *subtitleListItemSubtitleFont;

@property (strong, nonatomic, nullable, readonly) UIFont *textItemTitleFont;
@property (strong, nonatomic, nullable, readonly) UIFont *textItemTextFont;

@property (strong, nonatomic, nullable, readonly) UIFont *checkboxItemButtonFont;

@end
