//
//  SFSuggestsInteractor.h
//  TCSMBiOS
//
//  Created by v.y.ignatov on 25/05/2016.
//  Copyright © 2016 АО «Тинькофф Банк», лицензия ЦБ РФ № 2673. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "ITextSuggest.h"
#import "SFSuggestError.h"

@protocol ISuggestProvider;
@class SFSuggestsInteractor;

@protocol SFSuggestsInteractorDelegate <NSObject>

- (void)suggestsInteractorDidUpdate:(SFSuggestsInteractor *)suggestsInteractor;

@end

// Интерактор кеширует данные из провайдера и удобно оборачивает данные из него + обновляет данные между провайдерами
@interface SFSuggestsInteractor : NSObject

@property (weak, nonatomic) id <SFSuggestsInteractorDelegate> delegate;

- (NSInteger)count;
- (id <ITextSuggest>)suggestAtIndex:(NSInteger)index;

- (void)setupSuggestProvider:(id<ISuggestProvider>)suggestProvider;

- (void)changeText:(NSString *)text withCompletion:(void (^)(SFSuggestError *error))completion;
- (void)didSelectSuggestAtIndex:(NSInteger)index;

@end
