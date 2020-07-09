//
//  ISmartFieldsPageController.h
//  TCSMBiOS
//
//  Created by v.y.ignatov on 25/03/2016.
//  Copyright © 2016 “Tinkoff Credit Systems” Bank (closed joint-stock company). All rights reserved.
//

@protocol SFPageController;

@protocol SFPageControllerDelegate <NSObject>
- (void)SFPageControllerEventNext:(id<SFPageController>)pageController;
- (void)SFPageControllerEventPrevious:(id<SFPageController>)pageController;
- (void)SFPageControllerEventFinish:(id<SFPageController>)pageController;
@end

@protocol SFPageControllerDataSource <NSObject>
- (NSInteger)count;
- (NSInteger)currentIndex;
@end 


@protocol SFPageController <NSObject>

- (void)setPageControllerDelegate:(id<SFPageControllerDelegate>)delegate;
- (void)setPageControllerDataSource:(id<SFPageControllerDataSource>)dataSource;

@optional
- (void)indexChanged;
- (void)finishPagination;
- (void)shouldGoToNextSmartItemWithCompletion:(void (^)(BOOL shouldGoNext))completion;

@end
