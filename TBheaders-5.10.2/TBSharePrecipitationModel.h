//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray;

@interface TBSharePrecipitationModel : TBJSONModel
{
    _Bool _isMore;	// 8 = 0x8
    NSArray *_shareList;	// 16 = 0x10
}

+ (id)modelWithJSONDictionary:(id)arg1;
@property(retain, nonatomic) NSArray *shareList; // @synthesize shareList=_shareList;
@property(nonatomic) _Bool isMore; // @synthesize isMore=_isMore;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1;

@end

