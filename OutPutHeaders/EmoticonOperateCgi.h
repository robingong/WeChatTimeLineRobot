/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PBMessageObserverDelegate.h"
#import "MMObject.h"

@class NSMutableArray;
@protocol EmoticonOperateCgiDelegate;

@interface EmoticonOperateCgi : MMObject <PBMessageObserverDelegate> {
	BOOL m_hasStartRequestOnce;
	BOOL m_isDeleteMode;
	id<EmoticonOperateCgiDelegate> m_delegate;
	unsigned long m_eventId;
	NSMutableArray* m_md5List;
}
@property(retain, nonatomic) NSMutableArray* m_md5List;
@property(assign, nonatomic) BOOL m_isDeleteMode;
@property(assign, nonatomic) BOOL m_hasStartRequestOnce;
@property(assign, nonatomic) unsigned long m_eventId;
@property(assign, nonatomic) __weak id<EmoticonOperateCgiDelegate> m_delegate;
-(void).cxx_destruct;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)callOkNeedUploadDelegate:(id)delegate;
-(void)callFailedDelegateForOverLimit;
-(void)callFailedDelegate;
-(void)internalRequest;
-(BOOL)isActive;
-(void)startRequest;
-(id)initWithDeleteMd5List:(id)deleteMd5List delegate:(id)delegate;
-(id)initWithAddMd5List:(id)addMd5List delegate:(id)delegate;
-(void)dealloc;
@end
