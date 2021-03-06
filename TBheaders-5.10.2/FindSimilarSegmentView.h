//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FindSimilarSortView, FindSimilarViewModel, UIButton;
@protocol FindSimilarSegmentViewDelegate;

@interface FindSimilarSegmentView : UIView
{
    UIButton *_listStyleButton;	// 8 = 0x8
    FindSimilarSortView *_sortView;	// 16 = 0x10
    id <FindSimilarSegmentViewDelegate> _bridgeProtocol;	// 24 = 0x18
    FindSimilarViewModel *_resultViewModel;	// 32 = 0x20
}

@property(retain, nonatomic) FindSimilarViewModel *resultViewModel; // @synthesize resultViewModel=_resultViewModel;
@property(nonatomic) __weak id <FindSimilarSegmentViewDelegate> bridgeProtocol; // @synthesize bridgeProtocol=_bridgeProtocol;
- (void).cxx_destruct;
- (void)listStyleButtonClick;
- (void)reloadData;
- (void)setListStyle:(unsigned long long)arg1;
- (void)initSubView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

