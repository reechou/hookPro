//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JDWebViewTaskImpl.h"

@class NSDictionary, NSString, UIWebView;

@interface JDSHWebViewTaskSomeClickAction_finder : NSObject <JDWebViewTaskImpl>
{
    UIWebView *_webView;
    NSDictionary *_otherPageParam;
}

@property(copy, nonatomic) NSDictionary *otherPageParam; // @synthesize otherPageParam=_otherPageParam;
@property(nonatomic) __weak UIWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (CDUnknownBlockType)task;
- (id)initWithOtherPageParam:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
