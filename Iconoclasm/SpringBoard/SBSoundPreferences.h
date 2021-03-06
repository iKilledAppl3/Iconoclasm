/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Foundation/NSObject.h>
#import "SBSoundPreferences.h"


@interface SBSoundPreferences : NSObject {
}
+(void)userDefaultsDidChanged:(id)userDefaults;
+(id)calendarAlarmPath;
+(id)ringtoneIdentifier;
+(id)ringtonePath;
+(BOOL)playLockSound;
+(id)vibratePattern;
+(BOOL)vibrateWhenRinging;
+(BOOL)vibrateWhenSilent;
+(BOOL)shouldVibrateForCurrentRingerState;
@end

@interface SBSoundPreferences (Private)
+(void)_loadDefaultsIfNeeded;
@end

