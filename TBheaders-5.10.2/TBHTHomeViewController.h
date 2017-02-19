//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBHTBaseVC.h"

#import "HTUIGalleryViewDelegate-Protocol.h"
#import "HTUIWaterFlowLayoutDelegate-Protocol.h"
#import "TaffyLoadingDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, TBHTHomeCommonImageView, TBHTHomeCommonTextView, TBHTHomeDiscoverView, TBHTHomeEntryView, TBHTHomeGoodShopPresenter, TBHTHomeGuessLikeHeadView, TBHTHomeGuessLikeItemHead, TBHTHomeHotPresenter, TBHTHomeSalesPromotionView, TBHTHomeSelectedShopView, TBHTLoadingMoreView, TBHTUIGalleryView, TBHTUIWaterFlowLayout, UIButton, UICollectionView, UIImageView, UIView;

@interface TBHTHomeViewController : TBHTBaseVC <UICollectionViewDataSource, UICollectionViewDelegate, HTUIWaterFlowLayoutDelegate, TaffyLoadingDelegate, HTUIGalleryViewDelegate>
{
    _Bool _tempNaviHidden;	// 10 = 0xa
    double _minimumColumnSpacing;	// 16 = 0x10
    NSString *_scm;	// 24 = 0x18
    NSString *_pvid;	// 32 = 0x20
    _Bool _needRefresh;	// 40 = 0x28
    _Bool _loadMoreFailed;	// 41 = 0x29
    _Bool _showTop;	// 42 = 0x2a
    _Bool _isFirstAppear;	// 43 = 0x2b
    UIImageView *_statusView;	// 48 = 0x30
    UIView *_navigator;	// 56 = 0x38
    UICollectionView *_collectionView;	// 64 = 0x40
    NSMutableArray *_guessLikeData;	// 72 = 0x48
    NSMutableArray *_selectedShopArray;	// 80 = 0x50
    NSMutableArray *_favoriteImageArray;	// 88 = 0x58
    NSArray *_goodShopArray;	// 96 = 0x60
    NSArray *_hotArray;	// 104 = 0x68
    TBHTLoadingMoreView *_loadingMoreView;	// 112 = 0x70
    UIButton *_toTop;	// 120 = 0x78
    TBHTUIGalleryView *_galleryView;	// 128 = 0x80
    TBHTHomeCommonImageView *_commonImageView;	// 136 = 0x88
    TBHTHomeEntryView *_commonBlockView;	// 144 = 0x90
    TBHTHomeCommonTextView *_commonTextView;	// 152 = 0x98
    TBHTHomeSalesPromotionView *_salesPromotionView;	// 160 = 0xa0
    TBHTHomeDiscoverView *_discoverView;	// 168 = 0xa8
    TBHTUIWaterFlowLayout *_waterFlowLayout;	// 176 = 0xb0
    TBHTHomeHotPresenter *_hotPresenter;	// 184 = 0xb8
    TBHTHomeGuessLikeHeadView *_guessLikeHeadView;	// 192 = 0xc0
    TBHTHomeGuessLikeItemHead *_guessLikeItemHead;	// 200 = 0xc8
    TBHTHomeSelectedShopView *_selectedShopView;	// 208 = 0xd0
    TBHTHomeGoodShopPresenter *_goodShopPresenter;	// 216 = 0xd8
}

@property(retain, nonatomic) TBHTHomeGoodShopPresenter *goodShopPresenter; // @synthesize goodShopPresenter=_goodShopPresenter;
@property(retain, nonatomic) TBHTHomeSelectedShopView *selectedShopView; // @synthesize selectedShopView=_selectedShopView;
@property(retain, nonatomic) TBHTHomeGuessLikeItemHead *guessLikeItemHead; // @synthesize guessLikeItemHead=_guessLikeItemHead;
@property(retain, nonatomic) TBHTHomeGuessLikeHeadView *guessLikeHeadView; // @synthesize guessLikeHeadView=_guessLikeHeadView;
@property(retain, nonatomic) TBHTHomeHotPresenter *hotPresenter; // @synthesize hotPresenter=_hotPresenter;
@property(retain, nonatomic) TBHTUIWaterFlowLayout *waterFlowLayout; // @synthesize waterFlowLayout=_waterFlowLayout;
@property(retain, nonatomic) TBHTHomeDiscoverView *discoverView; // @synthesize discoverView=_discoverView;
@property(retain, nonatomic) TBHTHomeSalesPromotionView *salesPromotionView; // @synthesize salesPromotionView=_salesPromotionView;
@property(retain, nonatomic) TBHTHomeCommonTextView *commonTextView; // @synthesize commonTextView=_commonTextView;
@property(retain, nonatomic) TBHTHomeEntryView *commonBlockView; // @synthesize commonBlockView=_commonBlockView;
@property(retain, nonatomic) TBHTHomeCommonImageView *commonImageView; // @synthesize commonImageView=_commonImageView;
@property(retain, nonatomic) TBHTUIGalleryView *galleryView; // @synthesize galleryView=_galleryView;
@property(nonatomic) _Bool isFirstAppear; // @synthesize isFirstAppear=_isFirstAppear;
@property(nonatomic) _Bool showTop; // @synthesize showTop=_showTop;
@property(retain, nonatomic) UIButton *toTop; // @synthesize toTop=_toTop;
@property(nonatomic) _Bool loadMoreFailed; // @synthesize loadMoreFailed=_loadMoreFailed;
@property(retain, nonatomic) TBHTLoadingMoreView *loadingMoreView; // @synthesize loadingMoreView=_loadingMoreView;
@property(retain, nonatomic) NSArray *hotArray; // @synthesize hotArray=_hotArray;
@property(retain, nonatomic) NSArray *goodShopArray; // @synthesize goodShopArray=_goodShopArray;
@property(retain, nonatomic) NSMutableArray *favoriteImageArray; // @synthesize favoriteImageArray=_favoriteImageArray;
@property(retain, nonatomic) NSMutableArray *selectedShopArray; // @synthesize selectedShopArray=_selectedShopArray;
@property(retain, nonatomic) NSMutableArray *guessLikeData; // @synthesize guessLikeData=_guessLikeData;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIView *navigator; // @synthesize navigator=_navigator;
@property(retain, nonatomic) UIImageView *statusView; // @synthesize statusView=_statusView;
- (void).cxx_destruct;
- (id)getSpmId;
- (id)getPageId;
- (void)updateLoadingStatus;
- (void)onTaffyLoadActionEvent;
- (void)didSelectViewAtIndex:(long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 heightForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)didFinishFavouriteImage:(id)arg1;
- (void)didFinishGuessLikeData:(id)arg1;
- (void)startHotMtopRequest:(id)arg1;
- (void)startGoodShopMtopRequest:(id)arg1;
- (void)startRequestSelectedShopData:(id)arg1;
- (void)fetchFavouriteImage:(id)arg1;
- (void)fetchGuessLikeData:(id)arg1;
- (void)changeStatusBarStyleToLightContent;
- (void)finishRefreshPage;
- (void)refresh;
- (void)adjustHeaderLayout;
- (void)reloadDiscover;
- (void)reloadSalsePromotion;
- (void)reloadActivityText;
- (void)reloadCommonBlock;
- (void)reloadActivityImage;
- (void)reloadBanner;
- (void)setConfigDimensions;
- (void)setupConfigData;
- (void)startNetwork;
- (void)tryShowLocationView;
- (void)goToTop;
- (void)locationChanged:(id)arg1;
- (void)userLogined:(id)arg1;
- (void)configChanged:(id)arg1;
- (void)addListeners;
- (void)createHeaderView;
- (void)createSubviews;
- (void)createNavigator;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidAppearAtFirstTime;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
