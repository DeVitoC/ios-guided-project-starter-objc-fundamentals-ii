//
//  LSITipController.h
//  Tips
//
//  Created by Christopher Devito on 5/12/20.
//  Copyright © 2020 Lambda School. All rights reserved.
//

#import <Foundation/Foundation.h>

@class LSITip; 

NS_ASSUME_NONNULL_BEGIN

@interface LSITipController : NSObject

@property NSArray<LSITip *> *tips;

- (void)addTip:(LSITip *)tips;

@end

NS_ASSUME_NONNULL_END
