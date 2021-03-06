//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TMMarketBaseComponent.h"

@class NSString, TMMarketCouponTagView, UIImageView, UILabel;

@interface TMMarketHorizontalRichBComponent : TMMarketBaseComponent
{
    _Bool _hot;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    NSString *_titleColor;	// 40 = 0x28
    NSString *_subTitle;	// 48 = 0x30
    NSString *_subTitleColor;	// 56 = 0x38
    NSString *_staticPrice;	// 64 = 0x40
    NSString *_price;	// 72 = 0x48
    NSString *_priceTitle;	// 80 = 0x50
    NSString *_imgURL;	// 88 = 0x58
    UILabel *_titleLabel;	// 96 = 0x60
    UILabel *_subTitleLabel;	// 104 = 0x68
    UIImageView *_imageView;	// 112 = 0x70
    UILabel *_tagView;	// 120 = 0x78
    TMMarketCouponTagView *_couponTagView;	// 128 = 0x80
}

@property(retain, nonatomic) TMMarketCouponTagView *couponTagView; // @synthesize couponTagView=_couponTagView;
@property(retain, nonatomic) UILabel *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *imgURL; // @synthesize imgURL=_imgURL;
@property(nonatomic) _Bool hot; // @synthesize hot=_hot;
@property(copy, nonatomic) NSString *priceTitle; // @synthesize priceTitle=_priceTitle;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *staticPrice; // @synthesize staticPrice=_staticPrice;
@property(retain, nonatomic) NSString *subTitleColor; // @synthesize subTitleColor=_subTitleColor;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)bindFlare;
- (void)calculateLayout;
- (void)componentHasClicked;
- (id)initWithFrame:(struct CGRect)arg1;

@end

