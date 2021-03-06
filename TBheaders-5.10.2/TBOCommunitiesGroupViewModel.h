//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOBaseListViewModel.h"

@class NSMutableArray;
@protocol TBOCommunity;

@interface TBOCommunitiesGroupViewModel : TBOBaseListViewModel
{
    NSMutableArray<TBOCommunity> *_circleList;	// 8 = 0x8
    long long _totalCirclesCount;	// 16 = 0x10
}

@property(nonatomic) long long totalCirclesCount; // @synthesize totalCirclesCount=_totalCirclesCount;
@property(retain, nonatomic) NSMutableArray<TBOCommunity> *circleList; // @synthesize circleList=_circleList;
- (void).cxx_destruct;
- (long long)sectionCount;
- (long long)itemCount:(long long)arg1;
- (id)data:(id)arg1;
- (void)onloaderCompleted:(struct MtopExtResponse *)arg1 succeeded:(_Bool)arg2;
- (id)initWithKeyword:(id)arg1;

@end

