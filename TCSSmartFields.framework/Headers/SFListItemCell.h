//
//  MBSmartListItemCell.h
//  TCSMBiOS
//
//  Created by v.y.ignatov on 16/03/2016.
//  Copyright © 2016 “Tinkoff Credit Systems” Bank (closed joint-stock company). All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SFHintButton.h"

@interface SFListItemCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *subtitleLabel;
@property (weak, nonatomic) IBOutlet SFHintButton *hintButton;

- (void)configureWithTitle:(NSString *)title subtitle:(NSString *)subtitle hintTitle:(NSString *)hintTitle;

@end
