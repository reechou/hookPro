//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBRateUserComponent : TBJSONModel
{
    NSString *_userId;	// 8 = 0x8
    NSString *_userNick;	// 16 = 0x10
    NSString *_userPic;	// 24 = 0x18
    NSString *_userCredit;	// 32 = 0x20
    NSString *_userCreditPic;	// 40 = 0x28
    NSString *_userProfileURL;	// 48 = 0x30
}

+ (id)modelKeyMapper;
@property(retain, nonatomic) NSString *userProfileURL; // @synthesize userProfileURL=_userProfileURL;
@property(retain, nonatomic) NSString *userCreditPic; // @synthesize userCreditPic=_userCreditPic;
@property(retain, nonatomic) NSString *userCredit; // @synthesize userCredit=_userCredit;
@property(retain, nonatomic) NSString *userPic; // @synthesize userPic=_userPic;
@property(retain, nonatomic) NSString *userNick; // @synthesize userNick=_userNick;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end

