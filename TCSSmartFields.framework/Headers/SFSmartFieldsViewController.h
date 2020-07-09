//
//  MBNCSmartFieldsViewController.h
//  TCSMBiOS
//
//  Created by Ampilogov Vitaly on 01.03.16.
//  Copyright © 2016 “Tinkoff Credit Systems” Bank (closed joint-stock company). All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SFBaseItem.h"
#import "ISmartItemView.h"
#import "ISmartItemAnimatable.h"
#import "SFAccessoryView.h"
#import "ISmartItemPageController.h"
#import "SFDesign.h"

@class SFSmartFieldsViewController, SFAccessoryView;

@protocol SFSmartFieldsViewControllerDelegate <NSObject>

@optional
///вызывается после завершения редактирования поля
- (void)smartFieldsController:(nonnull SFSmartFieldsViewController *)controller didEndEditingSmartItem:(nonnull SFBaseItem *)smartItem atIndex:(NSUInteger)index;

///вызывается после отмены редактирования поля
- (void)smartFieldsController:(nonnull SFSmartFieldsViewController *)controller didCancelEditingSmartItem:(nonnull SFBaseItem *)smartItem atIndex:(NSUInteger)index;

@optional
///вызывается после нажатия на кнопку готово до скрытия экрана смарт-полей
- (void)smartFieldsController:(nonnull SFSmartFieldsViewController *)controller willSaveOnSmartItem:(nonnull SFBaseItem *)smartItem atIndex:(NSUInteger)index;

///вызывается после нажатия на кнопку готово или после завершения редактирования полей
- (void)smartFieldsController:(nonnull SFSmartFieldsViewController *)controller didSaveOnSmartItem:(nonnull SFBaseItem *)smartItem atIndex:(NSUInteger)index;

///вызывается после загрузки SFSmartFieldsViewController
- (void)smartFieldsDidLoadController:(nonnull SFSmartFieldsViewController *)controller;

///вызывается после отображения поля на экране
- (void)smartFieldsController:(nonnull SFSmartFieldsViewController *)controller didAppearitemAtIndex:(NSUInteger)index;

///вызывается при каждом изменении состояния поля 
- (void)smartFieldsController:(nonnull SFSmartFieldsViewController *)controller didChangeSmartItem:(nonnull SFBaseItem *)smartItem atIndex:(NSUInteger)index;

///переход на следующее поле только в том случае, если completion вернул shouldChange=YES
- (void)smartFieldsController:(nonnull SFSmartFieldsViewController *)controller
                    smartItem:(nonnull SFBaseItem *)smartItem
                      atIndex:(NSUInteger)index
                 shouldGoNext:(null_unspecified void (^)(BOOL shouldGoNext))completion;

/// вызывается при нажатии на саджест в таблице саджестов
- (void)smartFieldsController:(nonnull SFSmartFieldsViewController *)controller
  didSelectSuggestOnSmartItem:(nonnull SFBaseItem *)smartItem
                      atIndex:(NSUInteger)index
              selectedSuggest:(nonnull id <ITextSuggest>)selectedSuggest;

@end


@protocol SFSmartFieldsViewControllerDataSource <NSObject>

- (NSUInteger)numberOfItemsInSmartFieldsController:(nonnull SFSmartFieldsViewController *)controller;
- (nullable SFBaseItem *)smartFieldsController:(nonnull SFSmartFieldsViewController *)controller smartItemForIndex:(NSUInteger)index;

@end


@protocol SFNavigationBarAppearanceConfigurator
@property (strong, nonatomic, nonnull, readonly) UIColor *barTintColor;
@property (strong, nonatomic, nullable, readonly) NSDictionary *rightItemAttributes;
@property (strong, nonatomic, nullable, readonly) NSDictionary *leftItemAttributes;
@end

@protocol SFAppearanceConfigurator

@optional
@property (strong, nonatomic, nonnull, readonly) id <SFNavigationBarAppearanceConfigurator> navigationBarAppearance;

@end


@interface SFSmartFieldsViewController : UIViewController <SFDesignable>

///перезагружает данные и пересчитывает индексы
- (void)reloadData;
///пересчитывает индексы без перезагрузки активного контейнера
- (void)reloadNumberOfItems;

///вызывает пересчет и перерисовку в зависмости от индекса
- (void)setIndex:(NSUInteger)currentIndex;

@property (weak, nonatomic, nullable) id <SFSmartFieldsViewControllerDelegate> delegate;
@property (weak, nonatomic, nullable) id <SFSmartFieldsViewControllerDataSource> dataSource;

///верхний отображаемый айтем, при быстрой анимации может быть неактуален
@property (strong, nonatomic, readonly, nullable) UIViewController<ISmartItemView, ISmartItemAnimatable> *activeContainerViewController;

//Animatable
@property (weak, nonatomic, nullable) IBOutlet SFAccessoryView *accessoryView;

///позволяет задать стиль статус бара. По умолчанию UIStatusBarStyleLightContent
@property (assign, nonatomic) UIStatusBarStyle statusBarStyle;

@property (strong, nonatomic, nullable) id<SFAppearanceConfigurator> appearanceConfigurator;
@property (strong, nonatomic, nullable) id<SFDesignProtocol> design;

@end
