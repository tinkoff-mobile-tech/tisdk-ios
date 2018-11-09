# Tinkoff Insurance SDK for iOS

SDK, который позволяет клиенту оформить ОСАГО или каско за 5 минут

## Установка

1. Установить SDK в проект посредством [CocoaPods](http://cocoapods.org).

```ruby
pod "TISDK"
```

2. Добавить в Info.plist проекта необходимую конфигурацию для работы с SDK:

```json
<key>TISDK</key>
<dict>
<key>environment</key>
<string>$(TISDK_ENVIRONMENT)</string>
<key>origin</key>
<string>origin</string>
</dict>
```
- **origin** - предоставленный для вас идентификатор
- **environment** - это текущее окружение (staging или production). В соответствии с примером $(TISDK_ENVIRONMENT) - это User-Define переменная из Build Settings проекта.

3. Настроить окружение для конфигурации SDK требуется только один раз, для этого нужно добавить User-Define переменную с именем TISDK_ENVIRONMENT, если брать из примера. Затем определить окружение для конкретной конфигурации проекта.

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

@param viewController - UIViewController, который будет презентовать форму оформления полиса.
@param completionBlock - при успешной покупке полиса, в блоке будет возвращена информация об оформленном полисе.

### Оформление КАСКО

Для открытия формы для короткой заявки на КАСКО предназначен следующий метод:

```objective-c
- (void)buyKACKOInViewController:(UIViewController *)viewController;
```

@param viewController - viewController, который будет презентовать форму расчета стоимости полиса.

## Поддержка

- По вопросам партнерства просьба обращаться на onlinepartner@tinkoffinsurance.ru
- Дефекты и проблемы с интеграцией и работой SDK просьба заводить тикеты в issues
