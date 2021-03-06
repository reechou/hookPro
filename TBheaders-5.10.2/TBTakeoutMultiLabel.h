//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface TBTakeoutMultiLabel : UIView
{
    UILabel *_iconLabel;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    UILabel *_textLabel;	// 24 = 0x18
    NSString *_text;	// 32 = 0x20
    struct CGRect _textFrame;	// 40 = 0x28
}

+ (id)labelWithIconfont:(id)arg1 iconFrame:(struct CGRect)arg2 fontSize:(long long)arg3;
+ (id)labelWithImage:(id)arg1 imageFrame:(struct CGRect)arg2;
@property(nonatomic) struct CGRect textFrame; // @synthesize textFrame=_textFrame;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *iconLabel; // @synthesize iconLabel=_iconLabel;
- (void).cxx_destruct;

@end

