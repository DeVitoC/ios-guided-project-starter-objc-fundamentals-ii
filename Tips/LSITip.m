//
//  LSITip.m
//  Tips
//
//  Created by Christopher Devito on 5/12/20.
//  Copyright © 2020 Lambda School. All rights reserved.
//

#import "LSITip.h"

@implementation LSITip
- (instancetype)initWithName:(NSString *) name
                       total:(double)total
                  splitCount:(int)splitCount
               tipPercentage:(double)tipPercentage {
    if (self = [super init]) {
        // in init: always use the underscore _propertyName (instance variable)
        _name = name;
        _total = total;
        _splitCount = splitCount;
        _tipPercentage = tipPercentage;
    }
    return self;
}

// override setter/getter/instance property
// like a didset in swift, except we have to set it

// override create instance variable
@synthesize name = _name;

// override setter
- (void)setName:(NSString *)name {
    
    //#2 always use _propertyname in setter/getter also
    _name = name
    
    //[self saveToFireBase];
}

// override getter
- (NSString *)name {
    return _name;
}
@end
