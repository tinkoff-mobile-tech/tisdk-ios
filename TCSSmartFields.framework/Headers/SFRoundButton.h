//
//  SFRoundButton.h
//  TCSMBiOS
//
//  Created by v.y.ignatov on 27/05/2016.
//  Copyright © 2016 АО «Тинькофф Банк», лицензия ЦБ РФ № 2673. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SFDesign.h"

@interface SFRoundButton : UIButton

@property (nonatomic, strong, nullable) id<SFDesignProtocol> design;

- (void)changeSelectionState:(BOOL)selected;

@end
