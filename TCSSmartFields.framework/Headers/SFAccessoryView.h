//
//  MBSmartFieldAccessoryView.h
//  TCSMBiOS
//
//  Created by Ampilogov Vitaly on 02.03.16.
//  Copyright © 2016 “Tinkoff Credit Systems” Bank (closed joint-stock company). All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ISmartItemPageController.h"
#import "SFDesign.h"

@interface SFAccessoryView: UIView <SFPageController>

+ (CGFloat)height;
- (void)applyDesign:(nonnull id<SFDesignProtocol>)design;

@end
