/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class FBSDKLoginManager;

@interface FacebookAuth : MMObject {
	int m_uiFacebookUsageType;
	FBSDKLoginManager* m_fbLogin;
}
@property(assign, nonatomic) int m_uiFacebookUsageType;
-(void).cxx_destruct;
-(void)reAuth;
-(void)requestNewPermission;
-(void)tryAuth;
-(void)clearToken;
-(id)getAccessToken;
-(void)SaveData;
-(void)fbDidExtendToken;
-(void)fbDidNotLogin:(BOOL)fb;
-(void)fbDidLogin;
-(id)init;
@end

