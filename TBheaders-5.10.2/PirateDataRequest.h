//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCache, NSDictionary, NSString, PirateMtopRequest;
@protocol PirateEngineDataProtocol;

@interface PirateDataRequest : NSObject
{
    NSString *_basicRules;	// 8 = 0x8
    NSDictionary *_userDataDict;	// 16 = 0x10
    PirateMtopRequest *_ruleDataRequest;	// 24 = 0x18
    PirateMtopRequest *_userDataRequest;	// 32 = 0x20
    id <PirateEngineDataProtocol> _delegate;	// 40 = 0x28
    NSCache *_ruleScopeDict;	// 48 = 0x30
}

@property(retain, nonatomic) NSCache *ruleScopeDict; // @synthesize ruleScopeDict=_ruleScopeDict;
@property(nonatomic) __weak id <PirateEngineDataProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PirateMtopRequest *userDataRequest; // @synthesize userDataRequest=_userDataRequest;
@property(retain, nonatomic) PirateMtopRequest *ruleDataRequest; // @synthesize ruleDataRequest=_ruleDataRequest;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *userDataDict; // @synthesize userDataDict=_userDataDict;
@property(retain, nonatomic) NSString *basicRules; // @synthesize basicRules=_basicRules;
- (void)setRuleVersion:(id)arg1;
- (id)getRuleVersion;
- (void)clearRuleScopeWithKey:(id)arg1;
- (id)getRuleScopeWithKey:(id)arg1 modelClass:(Class)arg2;
- (id)getBasicRules;
- (id)getUserData;
- (void)downLoadAndCacheAnimation:(id)arg1;
- (id)saveImage:(id)arg1 withName:(id)arg2;
- (void)downloadElfResource:(id)arg1 overWrite:(_Bool)arg2;
- (void)cacheElfRules:(id)arg1;
- (void)downLoadAndCacheImages:(id)arg1;
- (void)rescourceProcess:(id)arg1;
- (void)updateRuleSets:(id)arg1 overWrite:(_Bool)arg2;
- (void)updateRuleData:(_Bool)arg1;
- (void)updateUserData;
- (id)init;

@end
