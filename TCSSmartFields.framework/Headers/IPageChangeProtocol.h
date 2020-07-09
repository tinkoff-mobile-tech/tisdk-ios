//
//  IPageChangeProtocol.h
//  TCSSmartFields
//
//  Created by m.zhdanov on 23.12.16.
//  Copyright © 2016 ru.tcsbank. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ISmartItemPageController.h"

@protocol IPageChangeProtocol <NSObject>

@property (nonatomic, weak) id<SFPageControllerDelegate> pageControllerDelegate;

@end
