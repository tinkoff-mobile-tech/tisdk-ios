//
//  SFActionSheetItem.h
//  TCSSmartFields
//
//  Created by i.kharabet on 27.10.17.
//  Copyright © 2017 ru.tcsbank. All rights reserved.
//

#import <UIKit/UIImage.h>

@interface SFActionSheetItem : NSObject

@property (nonatomic, copy, nonnull) NSString *title;
@property (nonatomic, copy, nonnull) UIImage *image;
@property (nonatomic, copy, nullable) void (^action)(void);

+ (instancetype _Nonnull)itemWithTitle:(NSString *_Nonnull)title image:(UIImage *_Nonnull)image action:(void(^_Nullable)(void))action;

@end
