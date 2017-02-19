//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface AlisecBioAuthInfo : NSObject
{
    _Bool _isSupportFingerprint;	// 8 = 0x8
    _Bool _isFPAvailable;	// 9 = 0x9
    int _type;	// 12 = 0xc
    int _protocolType;	// 16 = 0x10
    int _vendor;	// 20 = 0x14
    long long _protocolVersion;	// 24 = 0x18
    NSString *_phoneModel;	// 32 = 0x20
    NSDictionary *_extInfo;	// 40 = 0x28
}

+ (id)authInfoWith:(int)arg1 protocolType:(int)arg2 protocolVersion:(long long)arg3 vendor:(int)arg4 extInfo:(id)arg5;
+ (id)authInfoWith:(int)arg1 protocolType:(int)arg2 protocolVersion:(long long)arg3 vendor:(int)arg4;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) _Bool isFPAvailable; // @synthesize isFPAvailable=_isFPAvailable;
@property(nonatomic) _Bool isSupportFingerprint; // @synthesize isSupportFingerprint=_isSupportFingerprint;
@property(retain, nonatomic) NSString *phoneModel; // @synthesize phoneModel=_phoneModel;
@property(nonatomic) int vendor; // @synthesize vendor=_vendor;
@property(nonatomic) long long protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(nonatomic) int protocolType; // @synthesize protocolType=_protocolType;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;

@end
