/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol AVAudioSessionDelegate <NSObject>
@optional
-(void)inputIsAvailableChanged:(BOOL)changed;
-(void)endInterruption;
-(void)endInterruptionWithFlags:(unsigned)flags;
-(void)beginInterruption;
@end

