//
//  ViewController.h
//  MNTimeStable
//
//  Created by Mrunalini on 21/09/16.
//  Copyright © 2016 Mrunalini Nemade. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDelegate,UITableViewDataSource>
{
    NSMutableArray *allValues;
}

@property (strong, nonatomic) IBOutlet UITextField *numberField;

@property (strong, nonatomic) IBOutlet UITextField *limitField;
@property (strong, nonatomic) IBOutlet UIButton *calculateButton;
@property (strong, nonatomic) IBOutlet UITableView *tableView;
- (IBAction)calculateButton:(id)sender;



@end

