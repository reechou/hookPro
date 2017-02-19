//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class FBShimmeringView, NSArray, NSLock, NSMutableArray, NSString, NSTimer, UICollectionView, UIImageView, UILabel, UIPageControl;

@interface MLSlidingHeaderView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    NSArray *_items;
    UICollectionView *_collectionView;
    UIPageControl *_pageControl;
    UIView *_titleContainerView;
    UIImageView *_badgeView;
    UIImageView *_subBadgeView;
    FBShimmeringView *_shimmingView;
    UIView *_titleView;
    UILabel *_titleLabel;
    UIView *_subtitleView;
    UILabel *_subtitleLabel;
    NSMutableArray *_cellData;
    NSLock *_mLock;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSLock *mLock; // @synthesize mLock=_mLock;
@property(retain, nonatomic) NSMutableArray *cellData; // @synthesize cellData=_cellData;
@property(nonatomic) __weak UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(nonatomic) __weak UIView *subtitleView; // @synthesize subtitleView=_subtitleView;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) __weak FBShimmeringView *shimmingView; // @synthesize shimmingView=_shimmingView;
@property(retain, nonatomic) UIImageView *subBadgeView; // @synthesize subBadgeView=_subBadgeView;
@property(nonatomic) __weak UIImageView *badgeView; // @synthesize badgeView=_badgeView;
@property(nonatomic) __weak UIView *titleContainerView; // @synthesize titleContainerView=_titleContainerView;
@property(nonatomic) __weak UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)setupShRimmingAnimationIfNeededWithCurrentPage:(long long)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)fadeOutTitlesAnimatedCompletion:(CDUnknownBlockType)arg1;
- (void)fadeInTitlesAnimatedCompletion:(CDUnknownBlockType)arg1;
- (void)updateUIAndFadeInTitles;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateUI;
- (void)onTimer;
- (void)stopTimer;
- (void)startTimer;
- (void)reconfigureCollectionLayout;
- (void)dealloc;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
