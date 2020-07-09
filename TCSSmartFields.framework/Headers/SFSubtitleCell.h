//
//  SFSubtitleCell.h
//  TCSMBiOS
//
//  Created by v.y.ignatov on 24/03/2016.
//  Copyright © 2016 “Tinkoff Credit Systems” Bank (closed joint-stock company). All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SFDesign.h"

@protocol ITextSuggest;

@interface SFSubtitleCell: UITableViewCell <SFDesignable>

@property (nonatomic, strong, nullable) id<SFDesignProtocol> design;

- (void)configureWithTextSuggest:(nonnull id <ITextSuggest>)textSuggest;

@end
