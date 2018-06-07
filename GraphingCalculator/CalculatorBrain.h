//
//  CalculatorBrain.h
//  GraphingCalculator
//
//  Created by Alex on 04/06/2018.
//  Copyright (c) 2018 -. All rights reserved.
//
#import <Foundation/Foundation.h>

@interface CalculatorBrain : NSObject

@property (readonly) id program;

- (void)pushOperand:(double)operand;
- (void)pushVariable:(NSString *) variable;
- (void)pushOperation:(NSString *) operation;
- (id)performOperation:(NSString *)operation;
- (void)empty;
- (void)removeLastItem;


+ (NSString *)descriptionOfProgram:(id)program;

+ (id)runProgram:(id)program;
+ (id)runProgram:(id)program 
 usingVariableValues:(NSDictionary *)variableValues;

+ (NSSet *)variablesUsedInProgram:(id)program;

@end
