//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MMGlobalLogTime : NSObject
{
    NSMutableDictionary *m_dic;
    NSMutableDictionary *m_dicProc;
}

+ (id)sharedMMGlobalLogTime;
- (void).cxx_destruct;
- (void)end:(id)arg1;
- (void)needreport:(id)arg1 withEventId:(unsigned int)arg2;
- (void)start:(id)arg1 withStep:(const char *)arg2;
- (void)dealloc;
- (id)init;

@end
