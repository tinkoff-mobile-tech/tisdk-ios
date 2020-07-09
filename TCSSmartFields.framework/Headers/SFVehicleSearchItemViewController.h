//
// Created by i.v.vasilenko on 26/05/2017.
// Copyright (c) 2017 ru.tcsbank. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "ISmartItemAnimatable.h"
#import "ISmartItemView.h"
#import "SFVehicleSearchItemViewControllerInput.h"
#import "SFDesign.h"

@interface SFVehicleSearchItemViewController: UIViewController <ISmartItemView,
                                                                 ISmartItemAnimatable,
                                                                 SFVehicleSearchItemViewControllerInput,
                                                                 SFDesignable>

@property (nonatomic, strong, nullable) id<SFDesignProtocol> design;

@end
