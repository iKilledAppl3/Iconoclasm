/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "SBAlert.h"
#import "SpringBoard-Structs.h"

@class NSTimer;

@interface SBUSSDAlert : SBAlert {
	unsigned _receivedString : 1;
	unsigned _dismissOnActivate : 1;
	NSTimer *_delayedDismissTimer;
}
+(void)registerForSettingsAlerts;
+(void)registerForAlerts;
+(void)test;
+(id)errorStringForCode:(unsigned)code;
+(void)_daemonRestart:(id)restart;
+(void)_newSIM:(id)sim;
-(void)dealloc;
-(id)alertDisplayViewWithSize:(CGSize)size;
-(void)USSDStringAvailable:(id)available allowsResponse:(BOOL)response;
-(BOOL)allowsResponse;
-(BOOL)receivedString;
-(void)setDismissOnActivate:(BOOL)activate;
-(void)_delayedDismiss;
-(void)activate;
-(void)deactivate;
@end

