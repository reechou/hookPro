//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "MDMomentNoticeProtocol.h"

@class MDMomentNotice, NSString, UIButton, UIImageView, UILabel, UIView;

@interface MDMomentNoticeGiftCell : UITableViewCell <MDMomentNoticeProtocol>
{
    CDUnknownBlockType _giftBlock;
    CDUnknownBlockType _imageBlock;
    UIImageView *_iconImageView;
    UILabel *_nameLabel;
    UILabel *_timeLabel;
    UIButton *_giftButton;
    UIImageView *_momentImageView;
    UIView *_lineView;
    UIImageView *_momentPlayCover;
    MDMomentNotice *_notice;
}

@property(retain, nonatomic) MDMomentNotice *notice; // @synthesize notice=_notice;
@property(retain, nonatomic) UIImageView *momentPlayCover; // @synthesize momentPlayCover=_momentPlayCover;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *momentImageView; // @synthesize momentImageView=_momentImageView;
@property(retain, nonatomic) UIButton *giftButton; // @synthesize giftButton=_giftButton;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) CDUnknownBlockType imageBlock; // @synthesize imageBlock=_imageBlock;
@property(copy, nonatomic) CDUnknownBlockType giftBlock; // @synthesize giftBlock=_giftBlock;
- (void).cxx_destruct;
- (void)handleMomentImage:(id)arg1;
- (void)handleGift:(id)arg1;
- (void)setupUI;
- (void)bindModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

