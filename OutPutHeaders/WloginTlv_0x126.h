/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WloginTlv.h"

@class NSData;

@interface WloginTlv_0x126 : WloginTlv {
	unsigned short wVer;
	NSData* randData;
}
@property(retain) NSData* randData;
@property(assign) unsigned short wVer;
-(void)dealloc;
-(int)decode:(char**)decode andBuffLen:(int*)len;
@end

