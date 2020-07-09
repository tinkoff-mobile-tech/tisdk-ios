//
//  ISmartItemAnimatable.h
//  TCSMBiOS
//
//  Created by v.y.ignatov on 31/03/2016.
//  Copyright © 2016 “Tinkoff Credit Systems” Bank (closed joint-stock company). All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN

@class SFBaseItem;

@protocol ISmartItemAnimatable <NSObject>

- (void)changeSmartItem:(SFBaseItem *)item isNext:(BOOL)isNext;
- (void)animateDisappearanceWithCompletion:(void (^)(void))completion;

@end

NS_ASSUME_NONNULL_END
