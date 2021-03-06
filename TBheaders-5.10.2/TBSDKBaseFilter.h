//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBSDKMTOPServerBehindFilterProtocol-Protocol.h"

@class NSString;
@protocol TBSDKMTOPServerBehindFilterDelegate;

@interface TBSDKBaseFilter : NSObject <TBSDKMTOPServerBehindFilterProtocol>
{
    id <TBSDKMTOPServerBehindFilterDelegate> _delegate;	// 8 = 0x8
}

@property(nonatomic) __weak id <TBSDKMTOPServerBehindFilterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)performDelegatWithMtopServer:(id)arg1 headers:(id)arg2 responseCode:(int)arg3 response:(id)arg4 additionalParameters:(id)arg5;
- (void)mtopServer:(id)arg1 headers:(id)arg2 responseCode:(int)arg3 response:(id)arg4 additionalParameters:(id)arg5;
- (_Bool)isBackGround;
- (int)filterKind;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

