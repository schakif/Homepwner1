//
//  BNRItemStore.h
//  Homepwner
//
//  Created by Steve Chakif on 2/11/14.
//  Copyright (c) 2014 Steve Chakif. All rights reserved.
//

#import <Foundation/Foundation.h>
@class BNRItem;

@interface BNRItemStore : NSObject {
    NSMutableArray *allItems;
}

+ (BNRItemStore *)defaultStore;
- (NSArray *)allItems;
- (BNRItem *)createItem;



@end
