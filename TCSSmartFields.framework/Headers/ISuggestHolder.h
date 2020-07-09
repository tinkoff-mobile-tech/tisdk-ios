//
//  ISuggestHolder.h
//  TCSSmartFields
//
//  Created by a.kulabukhov on 10/05/2018.
//  Copyright © 2018 ru.tcsbank. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SmartItemBehaviour.h"

@protocol ISuggestHolder <SmartItemBehaviour>

/// Определяет должно ли поле переключиться на следующее после выбора саджеста
@property (nonatomic, assign, readonly) BOOL shouldGoNextAfterSelection;

@end
