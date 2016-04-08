/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface FTSFeatureItem : XXUnknownSuperclass {
	unsigned long _featureID;
	NSString* _title;
	NSString* _titlePY;
	NSString* _titleShortPY;
	NSString* _tag;
	NSString* _actionType;
	NSString* _actionUrl;
	NSString* _helpUrl;
	NSString* _updateUrl;
	int _pluginType;
}
@property(assign, nonatomic) int pluginType;
@property(retain, nonatomic) NSString* updateUrl;
@property(retain, nonatomic) NSString* helpUrl;
@property(retain, nonatomic) NSString* actionUrl;
@property(retain, nonatomic) NSString* actionType;
@property(retain, nonatomic) NSString* tag;
@property(retain, nonatomic) NSString* titleShortPY;
@property(retain, nonatomic) NSString* titlePY;
@property(retain, nonatomic) NSString* title;
@property(assign, nonatomic) unsigned long featureID;
-(void).cxx_destruct;
-(BOOL)shouldJumpNative;
-(BOOL)shouldJumpWeb;
-(id)init;
@end
