/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

//#import "SHNetworkControllerDelegate-Protocol.h"

@class PFUser, SHNetworkController;

@interface SHAuthenticationController : NSObject //<SHNetworkControllerDelegate>
{
    SHNetworkController *_networkController;
    PFUser *_currentUser;
}

//- (void).cxx_destruct;
- (void)cloudCodeOperationDidFailWithUserDisabledError;
- (void)_clearUserForCurrentInstallation;
- (void)updatePermissionsInformation;
- (void)_userDidGrantPermission:(id)arg1;
- (void)_updateInstallationForCurrentUser;
- (void)_authenticationWithSessionToken:(id)arg1 completion:(id)arg2;
- (void)endCurrentSession;
- (void)confirmUserWithUsername:(id)arg1 name:(id)arg2 completion:(id)arg3;
- (void)continueAuthenticationWithPhoneNumber:(id)arg1 confirmationCode:(id)arg2 completion:(id)arg3;
- (void)requestAuthenticationWithPhoneNumber:(id)arg1 completion:(id)arg2;
- (BOOL)isUserConfirmed;
- (BOOL)isUserAuthenticated;
- (id)userUsername;
- (id)userFullName;
- (id)userDisplayName;
- (void)changeUserFullNameTo:(id)arg1 completion:(id)arg2;
- (void)dealloc;
- (id)initWithNetworkController:(id)arg1;

@end

