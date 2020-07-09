//
//  ISmartTextAdditionalSymbolProvider.h
//  TCSSmartFields
//
//  Created by Борис on 12.07.17.
//  Copyright © 2017 ru.tcsbank. All rights reserved.
//

#import "SmartItemBehaviour.h"

/*
Добавляет текст справа от ввода
*/

@protocol ISmartTextAdditionalSymbolProvider <SmartItemBehaviour>
    
- (NSString *)additionalSymbol;
    
@end
