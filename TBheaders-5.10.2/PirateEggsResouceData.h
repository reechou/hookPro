//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PirateDataModel.h"

@class NSArray, NSString;

@interface PirateEggsResouceData : PirateDataModel
{
    _Bool _needCacheAnimations;	// 8 = 0x8
    _Bool _needCacheImages;	// 9 = 0x9
    int _type;	// 12 = 0xc
    NSString *_description;	// 16 = 0x10
    NSString *_resouceId;	// 24 = 0x18
    NSArray *_imageUrls;	// 32 = 0x20
    NSString *_animationUrl;	// 40 = 0x28
    NSString *_onClickJumpUrl;	// 48 = 0x30
}

@property(retain, nonatomic) NSString *onClickJumpUrl; // @synthesize onClickJumpUrl=_onClickJumpUrl;
@property(nonatomic) _Bool needCacheImages; // @synthesize needCacheImages=_needCacheImages;
@property(nonatomic) _Bool needCacheAnimations; // @synthesize needCacheAnimations=_needCacheAnimations;
@property(retain, nonatomic) NSString *animationUrl; // @synthesize animationUrl=_animationUrl;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray *imageUrls; // @synthesize imageUrls=_imageUrls;
@property(retain, nonatomic) NSString *resouceId; // @synthesize resouceId=_resouceId;
@property(retain, nonatomic) NSString *description; // @synthesize description=_description;
- (void).cxx_destruct;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;

@end
