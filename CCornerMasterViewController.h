//
//  CCornerMasterViewController.h
//  ChatCorner
//
//  Created by charles on 9/23/13.
//  Copyright (c) 2013 ca. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CCornerDetailViewController;

#import <CoreData/CoreData.h>

@interface CCornerMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) CCornerDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
