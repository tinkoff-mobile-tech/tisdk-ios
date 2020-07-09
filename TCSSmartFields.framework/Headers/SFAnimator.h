//
//  MBSmartFieldAnimator.h
//  TCSMBiOS
//
//  Created by Ampilogov Vitaly on 01.03.16.
//  Copyright © 2016 “Tinkoff Credit Systems” Bank (closed joint-stock company). All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SFDesign.h"

@interface SFAnimator : NSObject <UIViewControllerAnimatedTransitioning, SFDesignable>

@property (nonatomic, strong, nullable) id<SFDesignProtocol> design;

- (null_unspecified instancetype)initWithSourceView:(nullable UIView *)view presenting:(BOOL)presenting;

- (null_unspecified instancetype)init NS_UNAVAILABLE;
+ (null_unspecified instancetype)new NS_UNAVAILABLE;

@end
