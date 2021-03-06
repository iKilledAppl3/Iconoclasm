/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "SBStatusBarContentView.h"
#import "SpringBoard-Structs.h"


@interface SBStatusBarSignalView : SBStatusBarContentView {
	int _raw;
	int _bars;
	int _percentage;
	BOOL _showSignalView;
}
@property(assign, getter=isVisible) BOOL visible;
-(id)init;
-(void)dealloc;
-(void)start;
-(void)stop;
-(int)priority;
-(void)updateSignalStrength;
-(void)drawRect:(CGRect)rect;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(float)padding;
@end

