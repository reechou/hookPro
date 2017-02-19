//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"

@class NSString, UIView, UIViewController;

@interface MDAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    CDUnknownBlockType _transitonFinishBlock;
    CDUnknownBlockType _transitonStartBlock;
    long long _transitionType;
    id <UIViewControllerContextTransitioning> _transitionContext;
    UIViewController *_fromViewController;
    UIViewController *_toViewController;
    UIView *_containerView;
}

@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak UIViewController *toViewController; // @synthesize toViewController=_toViewController;
@property(nonatomic) __weak UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
@property(nonatomic) __weak id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
@property(nonatomic) long long transitionType; // @synthesize transitionType=_transitionType;
@property(copy, nonatomic) CDUnknownBlockType transitonStartBlock; // @synthesize transitonStartBlock=_transitonStartBlock;
@property(copy, nonatomic) CDUnknownBlockType transitonFinishBlock; // @synthesize transitonFinishBlock=_transitonFinishBlock;
- (void).cxx_destruct;
- (void)animationEnded:(_Bool)arg1;
- (void)animateDismissPopTransition;
- (void)animatePresentPushTransition;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithTransitionType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
