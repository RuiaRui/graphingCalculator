//
//  GraphViewController.h
//  GraphingCalculator
//
//  Created by Alex on 04/06/2018.
//  Copyright (c) 2018 -. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GraphViewController : UIViewController <UISplitViewControllerDelegate>

@property (nonatomic, strong) id program;

- (void)refreshProgramDependancies;

@end
