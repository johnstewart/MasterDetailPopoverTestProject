//
//  DetailViewController.h
//  MasterDetailPopoverTestProject
//
//  Created by John Stewart on 11/10/17.
//  Copyright © 2017 John Stewart. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

