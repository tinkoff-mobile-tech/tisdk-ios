//
// Copyright (c) 2018 TCS Bank
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import <Foundation/Foundation.h>

@class UIViewController;
@class TIPolicyInfo;

NS_ASSUME_NONNULL_BEGIN

__attribute__((objc_subclassing_restricted))
@interface TIInsurance : NSObject

/**
 * Синглтон SDK
 */
@property (class, nonatomic, readonly) TIInsurance *instance;

/**
 * Оформление страхового полиса "ОСАГО"
 * @param viewController - UIViewController, который будет презентовать форму оформления полиса.
 * @param completionBlock - при успешной покупке полиса, в блоке будет возвращена информация об оформленном полисе.
 */
- (void)buyOSAGOInViewController:(UIViewController *)viewController completionBlock:(void (^ _Nullable)(TIPolicyInfo *))completionBlock;

/**
 * Заявка на расчет стоимости страхового полиса "КАСКО"
 * @param viewController - viewController, который будет презентовать форму расчета стоимости полиса.
 */
- (void)buyKACKOInViewController:(UIViewController *)viewController;

@end

NS_ASSUME_NONNULL_END
