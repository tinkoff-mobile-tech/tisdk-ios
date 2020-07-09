//
//  SFActionSheetViewController.h
//  TCSSmartFields
//
//  Created by i.kharabet on 27.10.17.
//  Copyright © 2017 ru.tcsbank. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SFActionSheetItem.h"
#import "SFActionSheetCell.h"

@interface SFActionSheetViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate>

- (void)setActionSheetItems:(NSArray<SFActionSheetItem *> *_Nonnull)items;

@end
