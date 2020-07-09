//
//  ISmartTextResolver.h
//  TCSMBiOS
//
//  Created by Ampilogov Vitaly on 11/07/16.
//  Copyright © 2016 АО «Тинькофф Банк», лицензия ЦБ РФ № 2673. All rights reserved.
//
#import "SmartItemBehaviour.h"

/**
Разрешает или запрещает вводить текст в текстовое поле. 
Например, можно ограничить длинну или конкретные символы.
*/

@protocol ISmartTextResolver <SmartItemBehaviour>

- (BOOL)allowInputText:(NSString *)text;

@end
