//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSRecursiveLock, NSString;

__attribute__((visibility("hidden")))
@interface JSSpeedyMgr : MMService <MMService>
{
    NSString *_url;
    NSRecursiveLock *_lock;
}

- (void).cxx_destruct;
- (void)notifyOnMainThreadFinished;
- (void)webviewDownloadFinished;
- (id)getCurMainDocUrl;
- (void)setCurMainDocUrl:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
