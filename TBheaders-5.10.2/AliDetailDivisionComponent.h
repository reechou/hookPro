//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailComponent.h"

@class AliDetailDivisionModel, AliDetailDivisionStyleModel, UILabel, UIView;

@interface AliDetailDivisionComponent : AliDetailComponent
{
    AliDetailDivisionStyleModel *_styleModel;	// 8 = 0x8
    AliDetailDivisionModel *_divisionModel;	// 16 = 0x10
    UIView *_topLine;	// 24 = 0x18
    UIView *_bottomLine;	// 32 = 0x20
    UIView *_leftLine;	// 40 = 0x28
    UIView *_rightLine;	// 48 = 0x30
    UILabel *_middleTextLabel;	// 56 = 0x38
}

+ (double)componentHeightForObj:(id)arg1 preferredWidth:(double)arg2;
@property(retain, nonatomic) UILabel *middleTextLabel; // @synthesize middleTextLabel=_middleTextLabel;
@property(retain, nonatomic) UIView *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) UIView *leftLine; // @synthesize leftLine=_leftLine;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(nonatomic) __weak AliDetailDivisionModel *divisionModel; // @synthesize divisionModel=_divisionModel;
@property(retain, nonatomic) AliDetailDivisionStyleModel *styleModel; // @synthesize styleModel=_styleModel;
- (void).cxx_destruct;
- (void)adjustFrameForLine:(id)arg1 type:(id)arg2 yPos:(double)arg3;
- (void)drawDivisionText;
- (void)drawDivisionLines;
- (id)drawDivisionLine:(id)arg1;
- (void)drawView:(id)arg1 height:(double)arg2;
- (void)checkFgColor;
- (void)checkLineColor;
- (void)checkBgColor;
- (void)setDivisionComponent;
- (void)setObject:(id)arg1;
- (void)layoutSubviews;

@end
