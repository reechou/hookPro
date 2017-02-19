//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NewRecommendBase.h"

#import "UIGestureRecognizerDelegate.h"

@class JDIcon, JDImageView, NSString, RecommendTitleLabel, UIButton, UILabel, UIPanGestureRecognizer, UIView;

@interface NewRecommendItem : NewRecommendBase <UIGestureRecognizerDelegate>
{
    JDIcon *samIcon;
    JDIcon *samPriceIcon;
    JDIcon *plusPriceIcon;
    UIView *contextMenuView;
    UIView *actualContentView;
    JDImageView *recommendIconImageView;
    JDImageView *productImageView;
    RecommendTitleLabel *titleLabel;
    UIView *recomTextBGView;
    UILabel *recomTextLabel;
    UILabel *priceLabel;
    UILabel *samPriceLabel;
    UILabel *plusPriceLabel;
    UIButton *similarButton;
    UIButton *shoppingCartButton;
    double initialTouchPositionX;
    _Bool contextMenuHidden;
    UIButton *deleteRecommendButton;
    _Bool shouldDisplayContextMenuView;
    struct CGRect gridCellRect;
    UIPanGestureRecognizer *panRecognizer;
    UIView *blackView;
}

- (void).cxx_destruct;
- (void)onClickDeleteRecommendButton:(id)arg1;
- (void)onClickShoppingCartButton:(id)arg1;
- (void)onClickSimilarButton:(id)arg1;
- (double)contextMenuWidth;
- (void)setMenuOptionsViewHidden:(_Bool)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handlePan:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)loadItemView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
