//
//  ISFTooltipManager.h
//  TCSSmartFields
//
//  Created by a.v.tikhonova on 09.07.2018.
//  Copyright © 2018 ru.tcsbank. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol ISFTooltipManager <NSObject>

- (void)showTooltipWithText:(NSString *)text forButton:(UIButton *)toggleButton inView:(UIView *)view;
- (void)hide;

@end
