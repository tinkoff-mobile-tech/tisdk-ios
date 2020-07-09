//
//  IFormatter.h
//  TCSMBiOS
//
//  Created by Ampilogov Vitaly on 30/03/16.
//  Copyright © 2016 “Tinkoff Credit Systems” Bank (closed joint-stock company). All rights reserved.
//
#import "SmartItemBehaviour.h"

/*
Отвечает за подмену символов в процессе ввода в текстовое поле
Например для поля телефона при вводе первого символа 8, он автаматически заменится на +7
*/

@protocol ISmartTextFormatter <SmartItemBehaviour>

- (NSString *)formatedStringFromString:(NSString *)string currentText:(NSString *)currentText range:(NSRange)range;

@end
