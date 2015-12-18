/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "SBDismissOnlyAlertItem.h"


@interface SBVoiceMailAlertItem : SBDismissOnlyAlertItem {
	BOOL _isForVisualVoicemail;
	unsigned _recordUID;
}
@property(readonly, assign) BOOL isForVisualVoicemail;
+(id)currentInstance;
+(BOOL)hasCurrentInstance;
-(void)setIsVisualVoicemail:(BOOL)voicemail recordUID:(unsigned)uid;
-(void)didDeactivateForReason:(int)reason;
-(BOOL)willShowInAwayItems;
-(void)performUnlockAction;
-(id)lockLabel;
@end
