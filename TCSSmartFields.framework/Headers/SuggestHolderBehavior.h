//
//  SuggestHolderBehaviour.h
//  TCSSmartFields
//
//  Created by a.kulabukhov on 11/05/2018.
//  Copyright © 2018 ru.tcsbank. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ISuggestHolder.h"

@interface SuggestHolderBehavior : NSObject <ISuggestHolder>

@property (nonatomic, assign) BOOL shouldGoNextAfterSelection;

- (instancetype)initWithShouldGoNextAfterSelection:(BOOL)shouldGoNextAfterSelection;

@end
