//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MLPrivateMoreButtonClicked.h"

@class NSString, UIButton, UILabel;

@interface MLOwnerChoiceView : UIView <MLPrivateMoreButtonClicked>
{
    _Bool _isClosing;
    UIView *_contentView;
    UIButton *_tmpMoreBtn;
    CDUnknownBlockType _closeBlock;
    CDUnknownBlockType _choiceBlock;
    CDUnknownBlockType _onViewStartCloseBlock;
    UILabel *_numberLabel;
}

@property(nonatomic) _Bool isClosing; // @synthesize isClosing=_isClosing;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(copy, nonatomic) CDUnknownBlockType onViewStartCloseBlock; // @synthesize onViewStartCloseBlock=_onViewStartCloseBlock;
@property(copy, nonatomic) CDUnknownBlockType choiceBlock; // @synthesize choiceBlock=_choiceBlock;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(retain, nonatomic) UIButton *tmpMoreBtn; // @synthesize tmpMoreBtn=_tmpMoreBtn;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)updateNumberLabel:(long long)arg1;
- (void)close;
- (void)MLPrivateMoreButtonClicked:(int)arg1;
- (void)addDot;
- (void)setupBlurEffectView;
- (void)buildMenu:(id)arg1 menuItems:(id)arg2 redDots:(id)arg3 itemStatus:(id)arg4 numberForItem:(long long)arg5 numberedItemKey:(int)arg6;
- (void)closeMoreViewWithAnimation;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

