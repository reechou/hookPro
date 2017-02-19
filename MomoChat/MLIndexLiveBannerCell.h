//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MLIndexBannerTagView, UIImageView, UILabel;

@interface MLIndexLiveBannerCell : UIView
{
    UIImageView *_backgroundImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    MLIndexBannerTagView *_tagView;
    UIView *_maskBlackView;
    long long _effectValue;
    UIView *_containerView;
}

@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) long long effectValue; // @synthesize effectValue=_effectValue;
@property(retain, nonatomic) UIView *maskBlackView; // @synthesize maskBlackView=_maskBlackView;
@property(retain, nonatomic) MLIndexBannerTagView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;
- (void)setupImageMotionEffect;
- (void)setupMaskBlackView;
- (void)setupSubTitleLabel:(id)arg1;
- (void)setupTitleLabel:(id)arg1;
- (void)setupWithTitle:(id)arg1 subTitle:(id)arg2 tagText:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 withBackgroundImage:(id)arg2 title:(id)arg3 subTitle:(id)arg4 tagText:(id)arg5 isMotionEffect:(_Bool)arg6;

@end
