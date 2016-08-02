//
//  DetailsViewController.m
//  tableview
//
//  Created by Emily on 6/13/16.
//  Copyright © 2016 Emily Moss. All rights reserved.
//

#import "DetailsViewController.h"

@interface DetailsViewController ()

@end

@implementation DetailsViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.detailtitle.text = _detailmodal[0];
    self.detaildesc.text = _detailmodal[1];
    //here
    self.detailjob.text = _detailmodal[2];
   // self.detialimageview.image = [UIImage imageNamed:_detailmodal[2]];
    
    self.navigationItem.title = _detailmodal[0];
    
    // Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
