//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIImageView, UILabel;

@interface TBTradeRecmdIconView : UIView
{
    unsigned long long _iconType;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    UILabel *_label;	// 24 = 0x18
}

@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) unsigned long long iconType; // @synthesize iconType=_iconType;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIColor *textColor; // @dynamic textColor;
@property(retain, nonatomic) UIColor *bgColor; // @dynamic bgColor;
@property(retain, nonatomic) NSString *text; // @dynamic text;
- (id)init;

@end

