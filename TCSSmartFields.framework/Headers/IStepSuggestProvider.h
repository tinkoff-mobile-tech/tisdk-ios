//
//  IStepSuggestProvider.h
//  TCSSmartFields
//
//  Created by i.v.vasilenko on 06/06/2017.
//  Copyright © 2017 ru.tcsbank. All rights reserved.
//

#import "SFSuggestError.h"
#import "SmartItemBehaviour.h"

@protocol ITextSuggest;

@protocol IStepSuggestProvider <SmartItemBehaviour>

- (void)suggestsForText:(NSString *)text
        selectedObjects:(NSArray <id <ITextSuggest>> *)selectedObjects
              stepIndex:(NSUInteger)stepIndex
        completionBlock:(void (^)(NSArray <id <ITextSuggest>> *suggests, SFSuggestError *error))completion;

@end
