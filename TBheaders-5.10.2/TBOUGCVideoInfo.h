//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface TBOUGCVideoInfo : NSObject
{
    NSString *_localUrl;	// 8 = 0x8
    UIImage *_coverImage;	// 16 = 0x10
    NSString *_url;	// 24 = 0x18
    NSString *_coverUrl;	// 32 = 0x20
}

@property(retain, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) UIImage *coverImage; // @synthesize coverImage=_coverImage;
@property(retain, nonatomic) NSString *localUrl; // @synthesize localUrl=_localUrl;
- (void).cxx_destruct;

@end

