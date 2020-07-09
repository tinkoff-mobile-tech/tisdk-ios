//
//  SFListItemViewController.h
//  TCSMBiOS
//
//  Created by v.y.ignatov on 16/03/2016.
//  Copyright © 2016 “Tinkoff Credit Systems” Bank (closed joint-stock company). All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ISmartItemView.h"
#import "ISmartItemAnimatable.h"
#import "IPageChangeProtocol.h"
#import "SFDesign.h"

@interface SFListItemViewController : UIViewController <ISmartItemView, ISmartItemAnimatable,IPageChangeProtocol, SFDesignable>

@property (nonatomic, strong, nullable) id<SFDesignProtocol> design;

@end
