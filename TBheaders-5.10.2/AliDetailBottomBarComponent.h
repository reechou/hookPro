//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailComponent.h"

@class AliDetailBottomBarModel, NSMutableDictionary;

@interface AliDetailBottomBarComponent : AliDetailComponent
{
    AliDetailBottomBarModel *_bottomBarModel;	// 8 = 0x8
    NSMutableDictionary *_itemPool;	// 16 = 0x10
}

@property(retain, nonatomic) NSMutableDictionary *itemPool; // @synthesize itemPool=_itemPool;
@property(retain, nonatomic) AliDetailBottomBarModel *bottomBarModel; // @synthesize bottomBarModel=_bottomBarModel;
- (void).cxx_destruct;
- (void)setToolItemState:(id)arg1 data:(id)arg2;
- (id)getToolItemView:(id)arg1;
- (void)topShadowLine;
- (void)configToolbar;
- (void)startTimer;
- (void)stopTimer;
- (id)getItemViewPools;
- (void)layoutSubviews;
- (void)setObject:(id)arg1;

@end

