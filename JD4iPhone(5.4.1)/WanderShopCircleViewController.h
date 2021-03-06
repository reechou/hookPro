//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

#import "WanderShopCircleListDelegate.h"

@class NSString, UIButton, WanderShopCircleTableView;

@interface WanderShopCircleViewController : JDViewController <WanderShopCircleListDelegate>
{
    UIButton *_storyBackButton;
    WanderShopCircleTableView *circleTableView;
    _Bool _isSelectRecommend;
    CDUnknownBlockType _myCircleInfoChange;
    NSString *_MTAPageID;
    NSString *_LASTMTAPageID;
}

@property(copy, nonatomic) NSString *LASTMTAPageID; // @synthesize LASTMTAPageID=_LASTMTAPageID;
@property(copy, nonatomic) NSString *MTAPageID; // @synthesize MTAPageID=_MTAPageID;
@property(copy, nonatomic) CDUnknownBlockType myCircleInfoChange; // @synthesize myCircleInfoChange=_myCircleInfoChange;
@property(nonatomic) _Bool isSelectRecommend; // @synthesize isSelectRecommend=_isSelectRecommend;
- (void).cxx_destruct;
- (void)reloadData;
- (void)backAction;
- (void)backButtonClicked;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setBackButtonHidden:(_Bool)arg1;
- (void)openCircle:(id)arg1;
- (void)backTopButtonPressed:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

