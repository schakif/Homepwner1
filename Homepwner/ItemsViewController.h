//
//  ItemsViewController.h
//  Homepwner
//
//  Created by Steve Chakif on 2/11/14.
//  Copyright (c) 2014 Steve Chakif. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ItemsViewController : UITableViewController {
    IBOutlet UIView *headerView;
}

- (UIView *) headerView;
- (IBAction)addNewItem:(id)sender;
- (IBAction)toggleEditMode:(id)sender;

@end
