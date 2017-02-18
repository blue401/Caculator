//
//  AppDelegate.m
//  Caculator
//
//  Created by Blue on 2017/2/17.
//  Copyright © 2017年 Blue. All rights reserved.
//

#import "AppDelegate.h"

@interface AppDelegate ()

@property (weak) IBOutlet NSWindow *window;
@end

@implementation AppDelegate

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification {
    // Insert code here to initialize your application
}

- (void)applicationWillTerminate:(NSNotification *)aNotification {
    // Insert code here to tear down your application
}

-(IBAction)clearButtonCllick:(id)sender
{
    lastValue=0;
    mainLabel.stringValue=@"0";
    operand=@"";
}
- (IBAction)numberButtonClick:(id)sender
{
    
    NSString *mainLabelString = mainLabel.stringValue;
}
- (IBAction)operationButtonClick:(id)sender
{
    
}
- (IBAction)decimalButtonClick:(id)sender
{
    
}
- (IBAction)sumButtonClick:(id)sender
{
    
}
- (IBAction)plusAndMinusButtonClick:(id)sender
{
    
}



@end
