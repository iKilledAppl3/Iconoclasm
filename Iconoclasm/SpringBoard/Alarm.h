/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Foundation/NSObject.h>

@class NSString, NSCalendarDate;

@interface Alarm : NSObject {
	unsigned _alarmHour;
	unsigned _alarmMinute;
	int _alarmSetting;
	NSString *_alarmSoundIdentifier;
	NSString *_alarmTitle;
	NSCalendarDate *_snoozeUntilDate;
	unsigned _isActive : 1;
	unsigned _repeats : 1;
	unsigned _allowsSnooze : 1;
	unsigned _dontSendUpdate : 1;
	unsigned _dontStopSnoozing : 1;
	unsigned _reserved : 27;
}
@property(assign, getter=isActive) BOOL active;
@property(assign) BOOL repeats;
@property(assign) int daySetting;
@property(assign) BOOL allowsSnooze;
@property(retain) NSString *alarmSoundIdentifier;
@property(retain) NSString *alarmTitle;
-(id)description;
-(void)_update;
-(id)init;
-(id)_initWithDictionary:(id)dictionary;
-(id)_prefsDictionary;
-(void)dealloc;
-(BOOL)alarmTimesEqualTo:(id)to;
-(void)setAlarmHour:(unsigned)hour minute:(unsigned)minute;
-(void)getAlarmHour:(unsigned *)hour minute:(unsigned *)minute;
-(id)_fireDateAfterDate:(id)date;
-(BOOL)isSnoozing;
-(void)startSnoozingFromDate:(id)date;
-(void)stopSnoozing;
-(id)_snoozeUntilDate;
-(void)_activateAlertItem;
-(void)fireAlarm;
@end

