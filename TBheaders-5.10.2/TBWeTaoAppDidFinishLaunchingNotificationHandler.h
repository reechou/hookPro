//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBMMessageReceiver-Protocol.h"

@class NSString, TBSNSRedPoint, TBSNSWeexConfigMgr;

@interface TBWeTaoAppDidFinishLaunchingNotificationHandler : NSObject <TBMMessageReceiver>
{
    TBSNSRedPoint *_redPoint;	// 8 = 0x8
    TBSNSWeexConfigMgr *_weexConfigMgr;	// 16 = 0x10
}

@property(retain, nonatomic) TBSNSWeexConfigMgr *weexConfigMgr; // @synthesize weexConfigMgr=_weexConfigMgr;
@property(retain, nonatomic) TBSNSRedPoint *redPoint; // @synthesize redPoint=_redPoint;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMessageNotification:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

