//
//  ISmartItemViewController.h
//  TCSMBiOS
//
//  Created by v.y.ignatov on 16/03/2016.
//  Copyright © 2016 “Tinkoff Credit Systems” Bank (closed joint-stock company). All rights reserved.
//
#import "SFBaseItem.h"

@protocol ISmartItemViewDelegate <NSObject>
- (void)smartItemDidChange;
- (void)didSelectSuggest:(id <ITextSuggest>)suggest;
@end

@protocol ISmartItemView <NSObject>

- (void)setDelegate:(id<ISmartItemViewDelegate>)delegate;

- (BOOL)canDisplaySmartItem:(SFBaseItem *)item;
- (void)setupSmartItem:(SFBaseItem *)smartItem;
- (SFBaseItem *)smartItem;

//Animator views
- (BOOL)needAnimateSourceView;
- (UIView *)destinationView;
- (UIView *)hintView;

@optional

- (void)verify; //проверка введенных данных, если некорректные то очищаются
- (void)reloadWithNewSmartItem:(SFBaseItem *)smartItem; //перезагрузка с новым item
@end
