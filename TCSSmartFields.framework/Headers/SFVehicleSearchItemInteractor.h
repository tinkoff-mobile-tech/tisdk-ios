//
// Created by i.v.vasilenko on 26/05/2017.
// Copyright (c) 2017 ru.tcsbank. All rights reserved.
//

#import "IVehicleSearchItemInteractor.h"
#import "SFVehicleSearchFieldComponent.h"
#import "ISmartTextEditor.h"

NS_ASSUME_NONNULL_BEGIN

@protocol SFVehicleSearchItemViewControllerInput;
@protocol IStepSuggestProvider;

@interface SFVehicleSearchItemInteractor : NSObject <IVehicleSearchItemInteractor>

@property (weak, nonatomic, readonly, nullable) id <SFVehicleSearchItemViewControllerInput> view;
@property (strong, nonatomic, readonly, nullable) id <IStepSuggestProvider> suggestProvider;

@property (assign, nonatomic, readonly) NSUInteger stepIndex;
@property (assign, nonatomic, readonly) NSUInteger countOfSteps;
@property (copy, nonatomic, readonly) NSString *componentsSeparator;
@property (strong, nonatomic, readonly) NSMutableArray *selectedVehicleComponents;

- (void)updateSuggests;
- (void)updateCurrentStep;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)initWithView:(nullable id <SFVehicleSearchItemViewControllerInput>)view
             suggestProvider:(nullable id <IStepSuggestProvider>)suggestProvider
          selectedComponents:(nullable NSArray <SFVehicleSearchFieldComponent *> *)selectedComponents
               numberOfSteps:(NSUInteger)numberOfSteps
         componentsSeparator:(NSString *)componentsSeparator NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
