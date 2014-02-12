//
//  BNRItemStore.m
//  Homepwner
//
//  Created by Steve Chakif on 2/11/14.
//  Copyright (c) 2014 Steve Chakif. All rights reserved.
//

#import "BNRItemStore.h"
#import "BNRItem.h"

@implementation BNRItemStore

+ (BNRItemStore *)defaultStore {
    static BNRItemStore *defaultStore = nil;
    if(!defaultStore)
        defaultStore = [[super allocWithZone:nil] init];
    
    return defaultStore;
}

+ (id)allocWithZone:(NSZone *)zone {
    return [self defaultStore];
}

- (id)init {
    self = [super init];
    if(self) {
        allItems = [[NSMutableArray alloc] init];
    }
    return self;
}

- (NSArray *)allItems {
    return allItems;
}

- (BNRItem *)createItem {
    BNRItem *p = [BNRItem randomItem];
    
    [allItems addObject:p];
    
    return p;
}

@end
