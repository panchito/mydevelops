//
//  APMCallHelpViewController.h
//  Angel Politics
//
//  Created by Francisco on 6/11/13.
//  Copyright (c) 2013 angelpolitics. All rights reserved.
//

@class APMCallHelpViewController;
@protocol CallHelpDelegate <NSObject>

-(void)CallHelpDidDismiss:(APMCallHelpViewController *)controller;

@end

#import <UIKit/UIKit.h>

@interface APMCallHelpViewController : UIViewController

@property(nonatomic,weak)id<CallHelpDelegate>delegate;

@property (weak, nonatomic) IBOutlet UILabel *callLabel;

@property (weak, nonatomic) IBOutlet UILabel *cityAndState;
@property (weak, nonatomic) IBOutlet UILabel *ask;

@property (weak, nonatomic) IBOutlet UILabel *high2Label;

@property (weak, nonatomic) IBOutlet UILabel *high1Label;

@end
