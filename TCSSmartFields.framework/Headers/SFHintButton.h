//
//  SFHintButton.h
//  TCSSmartFields
//
//  Created by a.v.tikhonova on 10.07.2018.
//  Copyright © 2018 ru.tcsbank. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SFHintButton : UIButton

@property (nonatomic, strong) UIView *tooltipContainer;
@property (nonatomic, strong) NSString *hintString;

@end
