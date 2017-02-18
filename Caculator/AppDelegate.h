//
//  AppDelegate.h
//  Caculator
//
//  Created by Blue on 2017/2/17.
//  Copyright © 2017年 Blue. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>{
    
    IBOutlet NSTextFieldCell *mainLabel;
    
    
    IBOutlet NSButton *number0;
    IBOutlet NSButton *number1;
    IBOutlet NSButton *number2;
    IBOutlet NSButton *number3;
    IBOutlet NSButton *number4;
    IBOutlet NSButton *number5;
    IBOutlet NSButton *number6;
    IBOutlet NSButton *number7;
    IBOutlet NSButton *number8;
    IBOutlet NSButton *number9;
    IBOutlet NSButton *divide;
    IBOutlet NSButton *add;
    IBOutlet NSButton *subtract;
    IBOutlet NSButton *multiple;
    IBOutlet NSButton *sum;
    IBOutlet NSButton *decimalPoint;
    IBOutlet NSButton *clearValue;
    IBOutlet NSButton *remainder;
    IBOutlet NSButton *plusAndMinus;
    
    
    double lastValue;
    NSString *operand;
    
    
    
    
}

- (IBAction)numberButtonClick:(id)sender;
- (IBAction)operationButtonClick:(id)sender;
- (IBAction)decimalButtonClick:(id)sender;
- (IBAction)clearButtonCllick:(id)sender;
- (IBAction)sumButtonClick:(id)sender;
- (IBAction)plusAndMinusButtonClick:(id)sender;

@end

