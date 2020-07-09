//
//  ISFNavigationTitleViewProvider.h
//  TCSSmartFields
//
//  Created by a.teplyakov on 27/09/2017.
//  Copyright © 2017 ru.tcsbank. All rights reserved.
//

#ifndef ISFNavigationTitleViewProvider_h
#define ISFNavigationTitleViewProvider_h
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol ISFNavigationTitleProvider <NSObject>

@optional
- (UIView * _Nullable )getNavigationItemView;
- (NSString * _Nullable )title;

@end
#endif /* ISFNavigationTitleViewProvider_h */
