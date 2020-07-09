//
//  ISmartTextMaskDetector.h
//  TCSSmartFields
//
//  Created by k.a.nepomnyashciy on 30.01.17.
//  Copyright © 2017 ru.tcsbank. All rights reserved.
//

#import "SmartItemBehaviour.h"

/*
 По введенному тексту определяет нужно ли применять маску ввода
 */

@protocol ISmartTextMaskDetector <SmartItemBehaviour>

- (BOOL)isMaskNeededForText:(NSString *)text;

@end

