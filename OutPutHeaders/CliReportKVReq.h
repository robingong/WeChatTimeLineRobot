/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, NSData;

@interface CliReportKVReq : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSData* randomEncryKey;
@property(retain, nonatomic) NSMutableArray* dataPkg;
@property(assign, nonatomic) unsigned whiteOrBlackUinVersion;
@property(assign, nonatomic) unsigned specialVersion;
@property(assign, nonatomic) unsigned generalVersion;
+(void)initialize;
@end
