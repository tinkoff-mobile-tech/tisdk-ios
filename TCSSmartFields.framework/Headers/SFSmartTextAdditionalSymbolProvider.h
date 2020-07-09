//
//  SFSmartTextAdditionalSymbolProvider.h
//  TCSSmartFields
//
//  Created by Борис on 12.07.17.
//  Copyright © 2017 ru.tcsbank. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ISmartTextAdditionalSymbolProvider.h"

@interface SFSmartTextAdditionalSymbolProvider : NSObject <ISmartTextAdditionalSymbolProvider>
    
- (instancetype)initWithSymbol:(NSString *)additionalSymbol;
    
@end
