//
//
//  Copyright (c) 2014 Datasnap.io. All rights reserved.
//  Datasnap Demo

#import <UIKit/UIKit.h>
#import <ContextLocation/QLContextPlaceConnector.h>
#import <FYX/FYX.h>
#import <FYX/FYXVisitManager.h>

NSString* date();

@interface ViewController : UIViewController <QLContextPlaceConnectorDelegate, FYXServiceDelegate, FYXVisitDelegate>
+ (EventBuilder)eventBuilder;

@property IBOutlet UITextField *deviceDisplay;

@property (strong, nonatomic) IBOutlet UITextField *GarsTextField;
-(IBAction)textFieldReturn:(id)sender;

@property (nonatomic, strong) QLContextPlaceConnector *placeConnector;
@property (nonatomic) FYXVisitManager *visitManager;

@end

#define DeviceLog(message, ...) self.deviceDisplay.text = [self.deviceDisplay.text stringByAppendingString:[NSString stringWithFormat:message, ##__VA_ARGS__]]
