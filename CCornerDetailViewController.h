//
//  CCornerDetailViewController.h
//  ChatCorner
//
//  Created by charles on 9/23/13.
//  Copyright (c) 2013 ca. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CCornerDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
