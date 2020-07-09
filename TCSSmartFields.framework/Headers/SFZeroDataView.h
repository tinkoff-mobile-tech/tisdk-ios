//
// Created by i.v.vasilenko on 01/06/2017.
// Copyright (c) 2017 ru.tcsbank. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SFZeroDataView;

@protocol SFZeroDataViewDelegate <NSObject>

@optional
- (void)zeroDataViewActionButtonTapped:(SFZeroDataView *)zeroDataView;

@end

@interface SFZeroDataView : UIView

@property (weak, nonatomic) id <SFZeroDataViewDelegate> delegate;

@property (weak, nonatomic) IBOutlet UILabel *messageLabel;
@property (weak, nonatomic) IBOutlet UIButton *actionButton;

/**
 * ZeroData показывает только message и скрывает кнопку
 * @param message Текст для лейбла
 * @author Igor Vasilenko
 */
- (void)showWithMessage:(NSString *)message;

/**
 * ZeroData показывает message и кнопку, по нажатию которой отрабатывает метод делегата - (void)zeroDataViewActionButtonTapped
 * @param message Текст для лейбла
 * @param actionButtonTitle Текст для кнопки
 * @author Igor Vasilenko
 */
- (void)showWithMessage:(NSString *)message actionButtonTitle:(NSString *)actionButtonTitle;

- (void)hide;

@end
