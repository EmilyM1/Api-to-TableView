//
//  TableViewCell.h
//  tableview
//
//  Created by Emily on 6/13/16.
//  Copyright © 2016 Emily Moss. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *imageview;
@property (weak, nonatomic) IBOutlet UILabel *celltitle;
@property (weak, nonatomic) IBOutlet UILabel *celldesciption;
@property (weak, nonatomic) IBOutlet UILabel *job;

@end
