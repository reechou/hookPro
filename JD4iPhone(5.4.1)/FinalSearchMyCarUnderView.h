//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDView.h"

@class JDButton, NSArray, NSMutableArray, UIImageView, UILabel;

@interface FinalSearchMyCarUnderView : JDView
{
    UIImageView *_tipsIcon;
    UILabel *_tipsLabel;
    JDButton *_carMgrButton;
    UIImageView *_carMgrArrow;
    JDButton *_reloadButton;
    NSMutableArray *_myCarButtons;
    JDButton *_addButton;
    NSArray *_mycarModels;
    struct CGRect _originRect;
    id <FinalSearchMyCarUnderViewDelegate> _underViewDelegate;
}

@property(nonatomic) __weak id <FinalSearchMyCarUnderViewDelegate> underViewDelegate; // @synthesize underViewDelegate=_underViewDelegate;
- (void).cxx_destruct;
- (void)clearTempDataWhenCloseUnderView;
- (void)relayoutWithMyCarList:(id)arg1 selectedModel:(id)arg2 tips:(id)arg3 hideManager:(_Bool)arg4;
- (void)relayoutWithLoadingFailed;
- (void)relayoutWithLoading;
- (void)clearView;
- (void)carButtonClicked:(id)arg1;
- (void)carMgrBtnClicked:(id)arg1;
- (void)addButtonClicked:(id)arg1;
- (void)reloadBtnClicked:(id)arg1;
- (void)changeHeightTo:(double)arg1;
- (void)createButtons:(id)arg1 selectedModel:(id)arg2 hideManager:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end
