//
//  MasterViewController.h
//  MasterDetailPopoverTestProject
//
//  Created by John Stewart on 11/10/17.
//  Copyright © 2017 John Stewart. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;


@end

