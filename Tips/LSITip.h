//
//  LSITip.h
//  Tips
//
//  Created by Christopher Devito on 5/12/20.
//  Copyright © 2020 Lambda School. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LSITip : NSObject

// MARK: - Properties
@property NSString *name;

// 3 things happen with a property declaration
// 1. getter method
// - (NSString *)name;
// 2. setter method
// - (void)setName:(NSString * _Nonnull)name;
// 3. Instance variable
// NSString *_name;

@property double total;
@property int splitCount;
@property double tipPercentage;

// MARK: - Methods
- (instancetype)initWithName:(NSString *) name
                       total:(double)total
                  splitCount:(int)splitCount
               tipPercentage:(double)tipPercentage;
@end

NS_ASSUME_NONNULL_END
