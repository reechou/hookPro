//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SimpleImgInfo, UIView;

@protocol FavImageFullScreenViewContainerDelegate <NSObject>
- (void)onLongPressEvent:(UIView *)arg1 onImage:(SimpleImgInfo *)arg2;
- (_Bool)useAlphaAnimation;
- (_Bool)shouldAnimationWhenHide;
- (void)onAnimateFadeOut;
- (void)animationHideWithRotate;
- (void)onContainerAnimationHideStop;
- (void)onContainerAnimationHideStart;
- (void)onContainerAnimationShowStop;
- (void)onContainerAnimationShowStart;
@end

