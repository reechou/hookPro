//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSString, UIPageControl, UIScrollView;
@protocol TBIMInputFunctionItem;

@interface TBIMFunctionKeyboard : UIView <UIScrollViewDelegate>
{
    NSArray<TBIMInputFunctionItem> *_functionItems;	// 8 = 0x8
    UIPageControl *_pageControl;	// 16 = 0x10
    UIScrollView *_scrollView;	// 24 = 0x18
}

@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) NSArray<TBIMInputFunctionItem> *functionItems; // @synthesize functionItems=_functionItems;
- (void).cxx_destruct;
- (void)pageChange:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)functionControlClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

