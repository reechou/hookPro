//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "ICdnComMgrExt-Protocol.h"

@class CdnTaskInfo, NSMutableArray, NSString;
@protocol UploadShortVideoDelegate;

__attribute__((visibility("hidden")))
@interface UploadShortVideoToCdn : MMObject <ICdnComMgrExt>
{
    NSMutableArray *_arrUploadTask;
    CdnTaskInfo *_curTaskInfo;
    unsigned int _curUploadEventID;
    id <UploadShortVideoDelegate> m_delegate;
}

@property(nonatomic) __weak id <UploadShortVideoDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)MassSendSightFail;
- (void)MassSendSightOK;
- (void)clearTask;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (void)StopAll;
- (void)StopUpload:(id)arg1;
- (void)StopCurUpload;
- (void)StartUpload:(id)arg1;
- (void)CheckQueue;
- (void)DelTaskInUploadQueue:(id)arg1;
- (_Bool)IsMsgInUploadQueue:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
