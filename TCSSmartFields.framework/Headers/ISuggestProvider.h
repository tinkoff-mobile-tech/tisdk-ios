//
//  ISuggestProvider.h
//  TCSMBiOS
//
//  Created by v.y.ignatov on 24/03/2016.
//  Copyright © 2016 “Tinkoff Credit Systems” Bank (closed joint-stock company). All rights reserved.
//

#import "SFSuggestError.h"
#import "SmartItemBehaviour.h"
#import "ITextSuggest.h"

@protocol ISuggestProvider;

@protocol SuggestProviderDelegate <NSObject>

- (void)suggestProvider:(id <ISuggestProvider>)suggestProvider didUpdateSuggests:(NSArray <id <ITextSuggest>> *)suggests;

@end

@protocol ISuggestProvider <SmartItemBehaviour>

- (void)suggestsForText:(NSString *)text withCompletion:(void (^)(NSArray<id <ITextSuggest>>* suggests, SFSuggestError *error))completion;

@optional
@property (weak, nonatomic) id <SuggestProviderDelegate> delegate;

@property (nonatomic, strong) id<ITextSuggest> selectedSuggest;
@property (nonatomic, strong) NSArray <id<ITextSuggest>> *suggests;

- (void)discard;

@end
