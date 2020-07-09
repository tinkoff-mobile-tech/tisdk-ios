//
//  SFCeckboxItemViewController.h
//  TCSMBiOS
//
//  Created by v.y.ignatov on 26/05/2016.
//  Copyright © 2016 АО «Тинькофф Банк», лицензия ЦБ РФ № 2673. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ISmartItemView.h"
#import "ISmartItemAnimatable.h"
#import "IPageChangeProtocol.h"
#import "ISFNavigationTitleProvider.h"
#import "SFDesign.h"

@interface SFCheckboxItemViewController : UIViewController <ISmartItemView,
                                                            ISmartItemAnimatable,
                                                            IPageChangeProtocol,
                                                            ISFNavigationTitleProvider,
                                                            SFDesignable>

@property (nonatomic, strong, nullable) id<SFDesignProtocol> design;

@end
