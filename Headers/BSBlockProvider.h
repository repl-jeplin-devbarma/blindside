#import <Foundation/Foundation.h>

#import "BSProvider.h"

typedef id(^BSBlock)();

@interface BSBlockProvider : NSObject<BSProvider> {
    BSBlock block_;
}

+ (BSBlockProvider *)provider:(BSBlock)block;

- (id)initWithBlock:(BSBlock)block;
@end
