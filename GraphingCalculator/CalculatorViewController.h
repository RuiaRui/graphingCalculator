//
//  CalculatorViewController.h
//  GraphingCalculator
//
//  Created by Alex on 04/06/2018.
//  Copyright (c) 2018 -. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CalculatorBrain.h"

@protocol MasterViewControllerPopoverDelegate 
@property (weak, nonatomic) id masterViewController;
@end

@interface CalculatorViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *display;
@property (weak, nonatomic) IBOutlet UILabel *calculation;
@property (weak, nonatomic) IBOutlet UILabel *variables;

@property (weak, nonatomic) id<MasterViewControllerPopoverDelegate> popoverDelegate;


@end
