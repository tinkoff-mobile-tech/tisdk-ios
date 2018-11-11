[![CocoaPods](https://img.shields.io/badge/platforms-iOS-orange.svg?maxAge=2592000)](https://cocoapods.org/pods/TISDK)
[![Languages](https://img.shields.io/badge/languages-ObjC%20%7C%20%20Swift-orange.svg?maxAge=2592000)](https://github.com/TinkoffCreditSystems/tisdk-ios)
[![CocoaPods](https://img.shields.io/cocoapods/v/TISDK.svg?maxAge=2592000)](https://cocoapods.org/pods/TISDK)
[![carthage compatible](https://img.shields.io/badge/Carthage-compatible-4BC51D.svg?style=flat)](https://github.com/Carthage/Carthage)
[![Apache License](http://img.shields.io/badge/license-APACHE2-blue.svg?style=flat)](https://www.apache.org/licenses/LICENSE-2.0.html)

# Tinkoff Insurance SDK for iOS

Позволяет клиенту оформить ОСАГО или КАСКО за 5 минут!

## Установка

TISDK поддерживает версии iOS 9, 10, 11 & 12.

### 1. Установить SDK в проект следующими способами

#### Cocoapods

Добавьте в ваш Podfile и вызовите `pod install`

```ruby
pod 'TISDK'
```

#### Carhage

1. Добавьте `github "TinkoffCreditSystems/tisdk-ios"` в ваш Cartfile.
2. Вызовите `carthage update` в терминале.
3. Перейдите во вкладку "General Settings" в вашем проекте . Перенесите `TISDK.framework` из папки `Carthage/Build/iOS` в секцию "Embedded Binaries". Проверьте, что стоит флаг “Copy items if needed”.

#### Manual установка

1. [Скачайте TISDK for iOS](https://github.com/TinkoffCreditSystems/tisdk-ios/archive/master.zip) и распакуйте архив.
2. Перейдите во вкладку "General Settings" в вашем проекте . Перенесите `TISDK.framework` из папки `Carthage/Build/iOS` в секцию "Embedded Binaries". Проверьте, что стоит флаг “Copy items if needed”.
3. Добавьте новый "Run Script Phase" в таргет вашего проекта во вкладке "Build Phases" и вставьте следующий скрипт: 
`bash "${BUILT_PRODUCTS_DIR}/${FRAMEWORKS_FOLDER_PATH}/TISDK.framework/strip-frameworks.sh"`
Данный шаг важен для ворк-эраунда [App Store submission bug](http://www.openradar.me/radar?id=6409498411401216) при архивировании универсального фреймворка.

### 2. Обновите Info.plist

#### 1. Конфигурация SDK

```json
<key>TISDK</key>
<dict>
<key>environment</key>
<string>$(TISDK_ENVIRONMENT)</string>
<key>origin</key>
<string>origin</string>
</dict>
```

| Ключ            | Описание                                                                               |
|-----------------|----------------------------------------------------------------------------------------|
| origin          | Идентификатор вашего приложения                                                        |
| environment     | это текущее окружение (staging или production). В соответствии с примером $(TISDK_ENVIRONMENT) - это User-Define переменная из Build Settings проекта.                                                       |

#### 2. Для корректной работы SDK требуются permissions для использования камеры и фото-библиотеки

```json
<key>NSCameraUsageDescription</key>
<string>Разрешите пожалуйста доступ для загрузки документов</string>
<key>NSPhotoLibraryUsageDescription</key>
<string>Разрешите пожалуйста доступ для загрузки документов</string>
```

### 3. Настроить окружение для конфигурации SDK

Для этого нужно добавить User-Define переменную с именем `TISDK_ENVIRONMENT`, которую вы использовали при добавлении в Info.plist в пункте 2.1, если брать из примера. Затем определить окружение для конкретной конфигурации проекта.

Например:

```json
Debug - production
DebugQA - staging
Release - production
ReleaseQA - staging
```

## Использование

Основное взаимодействие с SDK происходит непосредственно с помощью класса TIInsurance.

### Оформление ОСАГО

Для открытия формы для расчета и покупки ОСАГО предназначен следующий метод:

```objective-c
- (void)buyOSAGOInViewController:(UIViewController *)viewController completionBlock:(void (^ _Nullable)(TIPolicyInfo *))completionBlock;
```

| Параметр        | Описание                                                                               |
|-----------------|----------------------------------------------------------------------------------------|
| viewController  | UIViewController, который будет презентовать форму оформления полиса                   |
| completionBlock | При успешной покупке полиса, в блоке будет возвращена информация об оформленном полисе |

### Оформление КАСКО

Для открытия формы для короткой заявки на КАСКО предназначен следующий метод:

```objective-c
- (void)buyKACKOInViewController:(UIViewController *)viewController;
```

| Параметр        | Описание                                                                               |
|-----------------|----------------------------------------------------------------------------------------|
| viewController  | UIViewController, который будет презентовать форму оформления полиса                   |

## Поддержка

- По вопросам партнерства просьба обращаться на onlinepartner@tinkoffinsurance.ru
- Дефекты и проблемы с интеграцией и работой SDK просьба заводить тикеты в issues
