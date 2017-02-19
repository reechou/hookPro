//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXDomModule.h"

#import "WXModuleProtocol-Protocol.h"

@class NSString, WXSDKInstance;

@interface WXWebViewModule : WXDomModule <WXModuleProtocol>
{
    WXSDKInstance *weexInstance;	// 8 = 0x8
}

+ (id)wx_export_method_21;
+ (id)wx_export_method_20;
+ (id)wx_export_method_19;
+ (id)wx_export_method_18;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance;
- (void).cxx_destruct;
- (void)goForward:(id)arg1;
- (void)goBack:(id)arg1;
- (void)reload:(id)arg1;
- (void)notifyWebview:(id)arg1 data:(id)arg2;
- (void)doBlock:(CDUnknownBlockType)arg1;
- (void)performBlockWithWebView:(id)arg1 block:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
