//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface TFELoadOptions : NSObject
{
    int _timeout;	// 8 = 0x8
    unsigned long long _cachePolicy;	// 16 = 0x10
    double _connectionTimeout;	// 24 = 0x18
    NSString *_httpMethod;	// 32 = 0x20
    NSDictionary *_requestHeaders;	// 40 = 0x28
    NSData *_requestData;	// 48 = 0x30
    id _userInfo;	// 56 = 0x38
}

@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSData *requestData; // @synthesize requestData=_requestData;
@property(retain, nonatomic) NSDictionary *requestHeaders; // @synthesize requestHeaders=_requestHeaders;
@property(retain, nonatomic) NSString *httpMethod; // @synthesize httpMethod=_httpMethod;
@property(nonatomic) int timeout; // @synthesize timeout=_timeout;
@property(nonatomic) double connectionTimeout; // @synthesize connectionTimeout=_connectionTimeout;
@property(nonatomic) unsigned long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
- (void).cxx_destruct;
- (id)initWithCachePolicy:(unsigned long long)arg1 connectionTimeout:(int)arg2 timeout:(int)arg3;
- (id)initWithCachePolicy:(unsigned long long)arg1;

@end
