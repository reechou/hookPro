//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WCMallActivityInfo : NSObject
{
    unsigned int m_uiActivityExpiredTime;
    NSString *m_nsActivityIconLink;
    NSString *m_nsActivityId;
    NSString *m_nsActivityLink;
    NSString *m_nsActivityMessageContent;
    NSString *m_nsActivityTips;
    unsigned int m_uiActivityJumpFunctionId;
    unsigned int m_uiIsMsgReserved;
    unsigned int _m_uiActivityType;
    NSString *_m_nsActivityUrl;
}

@property(retain, nonatomic) NSString *m_nsActivityUrl; // @synthesize m_nsActivityUrl=_m_nsActivityUrl;
@property(nonatomic) unsigned int m_uiActivityType; // @synthesize m_uiActivityType=_m_uiActivityType;
@property(nonatomic) unsigned int m_uiIsMsgReserved; // @synthesize m_uiIsMsgReserved;
@property(retain, nonatomic) NSString *m_nsActivityTips; // @synthesize m_nsActivityTips;
@property(nonatomic) unsigned int m_uiActivityJumpFunctionId; // @synthesize m_uiActivityJumpFunctionId;
@property(retain, nonatomic) NSString *m_nsActivityMessageContent; // @synthesize m_nsActivityMessageContent;
@property(retain, nonatomic) NSString *m_nsActivityLink; // @synthesize m_nsActivityLink;
@property(retain, nonatomic) NSString *m_nsActivityId; // @synthesize m_nsActivityId;
@property(retain, nonatomic) NSString *m_nsActivityIconLink; // @synthesize m_nsActivityIconLink;
@property(nonatomic) unsigned int m_uiActivityExpiredTime; // @synthesize m_uiActivityExpiredTime;
- (void).cxx_destruct;

@end
