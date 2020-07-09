//
//  ISmartTextInputHandler.h
//  TCSSmartFields
//
//  Created by a.shilkin on 13.02.2019.
//  Copyright © 2019 ru.tcsbank. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SmartItemBehaviour.h"

/**
 Отвечает за полную передачу управления введенным значением.
 Например чтобы очищать поле при любом изменении.
 */

@protocol ISmartTextInputHandler <SmartItemBehaviour>
    
/// Обработка изменений поля извне
/// - Returns: было ли изменение обработано извне
- (BOOL)handleCharactersChangeInRange:(NSRange)range replacementString:(NSString *)string textView:(id <UITextInput>)textView;
    
@end
