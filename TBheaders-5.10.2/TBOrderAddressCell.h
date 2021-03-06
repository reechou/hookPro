//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOrderBasicCell.h"

@class UIImageView, UILabel;

@interface TBOrderAddressCell : TBOrderBasicCell
{
    UIImageView *_icon;	// 8 = 0x8
    UILabel *_name;	// 16 = 0x10
    UILabel *_phone;	// 24 = 0x18
    UILabel *_address;	// 32 = 0x20
}

+ (double)cellHeight:(id)arg1 withWidth:(double)arg2 styleKitContext:(id)arg3 controller:(id)arg4;
@property(retain, nonatomic) UILabel *address; // @synthesize address=_address;
@property(retain, nonatomic) UILabel *phone; // @synthesize phone=_phone;
@property(retain, nonatomic) UILabel *name; // @synthesize name=_name;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)bindData:(id)arg1 controller:(id)arg2 styleKitContext:(id)arg3;
- (void)layoutSubviews;
- (void)viewLayout;

@end

