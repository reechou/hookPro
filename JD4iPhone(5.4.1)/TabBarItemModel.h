//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

#import "NSCopying.h"

@class NSString;

@interface TabBarItemModel : JDModel <NSCopying>
{
    NSString *_title;
    NSString *_key;
    NSString *_normalImageURL;
    NSString *_pressImageURL;
    NSString *_mURL;
}

@property(retain, nonatomic) NSString *mURL; // @synthesize mURL=_mURL;
@property(retain, nonatomic) NSString *pressImageURL; // @synthesize pressImageURL=_pressImageURL;
@property(retain, nonatomic) NSString *normalImageURL; // @synthesize normalImageURL=_normalImageURL;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

