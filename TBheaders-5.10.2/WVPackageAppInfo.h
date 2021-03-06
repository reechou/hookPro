//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WVJSBridgeInterfaceProtocol-Protocol.h"

@class NSString;
@protocol WVJSBridgeContextProtocol;

@interface WVPackageAppInfo : NSObject <WVJSBridgeInterfaceProtocol>
{
}

+ (void)reportPreviewApp:(id)arg1 withMessage:(id)arg2;
+ (void)updatePreviewConfig:(id)arg1 withWebView:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
+ (void)updatePreviewPrefixes:(id)arg1 withWebView:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
+ (void)previewApp:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
+ (id)getUrl:(id)arg1 withInfo:(id)arg2;
+ (void)urlInfo:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
+ (void)cleanUp:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
+ (void)update:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
+ (void)clear:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
+ (void)readDiskFileList:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
+ (void)readMemoryStatisitcs:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
+ (void)readMemoryPrefixes:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
+ (void)readMemoryZCacheMap:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
+ (void)readMemoryConfig:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
+ (void)registerApp:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
+ (void)localPathForURL:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;

// Remaining properties
@property(nonatomic) __weak id <WVJSBridgeContextProtocol> context;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

