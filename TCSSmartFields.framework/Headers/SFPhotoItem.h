//
//  SFPhotoItem.h
//  TCSSmartFields
//
//  Created by k.a.nepomnyashciy on 04.04.17.
//  Copyright © 2017 ru.tcsbank. All rights reserved.
//

#import "SFBaseItem.h"
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, SFPhotoItemSourceType) {
    SFPhotoItemSourceTypeCameraAndLibrary = 0,
    SFPhotoItemSourceTypeCamera = 1,
    SFPhotoItemSourceTypeLibrary = 2
};

@protocol IPhotoItemCameraOverlay;

@interface SFPhotoItem : SFBaseItem

/**
 * Показывать или не показывать сколько фоток можно выбрать
 * @note По дефолту: YES
 */
@property (nonatomic, assign) BOOL showPhotosCount;

/**
 * Максимальное количество фотографий, которое можно выбрать
 */
@property (nonatomic, assign) NSUInteger maxPhotosCount;

/**
 * Минимальное количество фотографий, которое нужно выбрать
 */
@property (nonatomic, assign) NSUInteger minPhotosCount;

/**
 * Положение текста заголовка
 * @note По дефолту: NSTextAlignmentCenter
 */
@property (nonatomic, assign) NSTextAlignment titleTextAlignment;

/**
 * Положение текста счетчика фотографий
 * @note По дефолту: NSTextAlignmentCenter
 */
@property (nonatomic, assign) NSTextAlignment photosCountTextAlignment;

/**
 * Доступные источники для прикрепления фото
 * @note
 * Если установлено SFPhotoItemSourceTypeCamera или SFPhotoItemSourceTypeLibrary, то будет сразу открыт один из источников соответственно.
 * Если установлено SFPhotoItemSourceTypeCameraAndLibrary, то будет открыт action sheet с выбором конкретного источника.
 * По дефолту: SFPhotoItemSourceTypeCameraAndLibrary
 */
@property (nonatomic, assign) SFPhotoItemSourceType sourceType;

/**
 * Кастомый overlay для камеры
 */
@property (nonatomic, strong) UIView <IPhotoItemCameraOverlay> *cameraOverlayView;

/**
 * Массив выбранных фотографий
 */
@property (nonatomic, strong) NSArray <UIImage *> *photos;

@end
