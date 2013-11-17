//
//  DetailViewController.h
//  Recipe Book
//
//  Created by cdarsey on 11/17/13.
//  Copyright (c) 2013 cdarsey. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
