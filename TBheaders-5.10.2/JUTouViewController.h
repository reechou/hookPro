//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNPagingViewController.h"

@class JHSBackTopView, JUTouOptionsProvider, NSArray, NSMutableSet, NSSet, NSString, UIButton;

@interface JUTouViewController : SNPagingViewController
{
    UIButton *_backButton;	// 40 = 0x28
    JUTouOptionsProvider *_optionsProvider;	// 48 = 0x30
    _Bool _isLoadingCollectItems;	// 56 = 0x38
    NSMutableSet *_insertedItemsNeedMerge;	// 64 = 0x40
    NSMutableSet *_removedItemsNeedMerge;	// 72 = 0x48
    NSMutableSet *_collectItems;	// 80 = 0x50
    _Bool _hasLoadedOnce;	// 88 = 0x58
    NSArray *_pages;	// 96 = 0x60
    NSArray *_options;	// 104 = 0x68
    NSString *_optionCatId;	// 112 = 0x70
    unsigned long long _showIndex;	// 120 = 0x78
    JHSBackTopView *_backTopView;	// 128 = 0x80
}

@property(retain, nonatomic) JHSBackTopView *backTopView; // @synthesize backTopView=_backTopView;
@property(nonatomic) unsigned long long showIndex; // @synthesize showIndex=_showIndex;
@property(retain, nonatomic) NSString *optionCatId; // @synthesize optionCatId=_optionCatId;
@property(readonly, nonatomic) NSSet *collectItems; // @synthesize collectItems=_collectItems;
@property(retain, nonatomic) NSArray *options; // @synthesize options=_options;
@property(retain, nonatomic) NSArray *pages; // @synthesize pages=_pages;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)pagingView:(id)arg1 didMoveToPage:(id)arg2;
- (void)preloadPage:(long long)arg1;
- (void)pagingView:(id)arg1 willMoveToPage:(id)arg2;
- (void)pagingView:(id)arg1 didRemovePage:(id)arg2;
- (id)contentViewForPageAtIndex:(unsigned long long)arg1;
- (id)menuModelForPageAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfPages;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)backButtonPressed:(id)arg1;
- (void)expandedButtonPressed:(id)arg1;
- (void)reload;
- (void)coverViewDidLoad;
- (id)currentTableView;
- (void)swipeGestureAction:(id)arg1;
- (void)setupSwipeGesture;
- (void)setupBackTopView;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

