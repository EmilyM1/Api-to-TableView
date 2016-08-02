//
//  TableViewController.h
//  tableview
//
//  Created by Emily on 6/13/16.
//  Copyright © 2016 Emily Moss. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TableViewController : UITableViewController{
    @private
    NSArray *members;
    NSMutableArray *images;
    
    
    NSMutableArray *description;
    NSMutableArray *title;
}

@end
