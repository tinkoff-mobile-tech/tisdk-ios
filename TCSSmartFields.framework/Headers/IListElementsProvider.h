//
// Created by i.v.vasilenko on 2019-01-10.
// Copyright (c) 2019 ru.tcsbank. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SmartItemBehaviour.h"

@class SFListElement;

@protocol IListElementsProvider <SmartItemBehaviour>

- (void)loadListElementsWithCompletion:(void(^_Nonnull)(NSArray <SFListElement *> * _Nullable, NSError * _Nullable))completion;

// Всегда загружать элементы списка (например, в ипотеке)
@optional
@property (nonatomic, assign, readonly) BOOL shouldUpdateListELementsOnStep;

@end
