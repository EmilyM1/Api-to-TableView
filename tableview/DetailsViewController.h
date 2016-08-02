//
//  DetailsViewController.h
//  tableview
//
//  Created by Emily on 6/13/16.
//  Copyright © 2016 Emily Moss. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailsViewController : UIViewController

@property (strong, nonatomic) NSArray *detailmodal;
@property (weak, nonatomic) IBOutlet UIImageView *detialimageview;
@property (weak, nonatomic) IBOutlet UILabel *detailtitle;
@property (weak, nonatomic) IBOutlet UILabel *detaildesc;

@property (weak, nonatomic) IBOutlet UILabel *detailjob;
@end
