//
//  AxesDrawer.h
//  GraphingCalculator
//
//  Created by Alex on 04/06/2018.
//  Copyright (c) 2018 -. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AxesDrawer : NSObject

+ (void)drawAxesInRect:(CGRect)bounds
         originAtPoint:(CGPoint)axisOrigin
                 scale:(CGFloat)pointsPerUnit;

@end
