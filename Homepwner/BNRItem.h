//
//  BNRItem.h
//  Homepwner
//
//  Created by Steve Chakif on 2/11/14.
//  Copyright (c) 2014 Steve Chakif. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BNRItem : NSObject

+ (id)randomItem;

- (id)initWithItemName:(NSString *)name
        valueInDollars:(int)value
          serialNumber:(NSString *)sNumber;

@property (nonatomic, strong) BNRItem *containedItem;
@property (nonatomic, weak) BNRItem *container;

@property (nonatomic, copy) NSString *itemName;
@property (nonatomic, copy) NSString *serialNumber;
@property (nonatomic) int valueInDollars;
@property (nonatomic, readonly, strong) NSDate *dateCreated;

@end
