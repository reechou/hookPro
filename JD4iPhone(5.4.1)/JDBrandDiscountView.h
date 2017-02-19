//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "JDShopDelegate.h"

@class JDGoodShopResultModel, NSMutableArray, NSString;

@interface JDBrandDiscountView : UIView <JDShopDelegate>
{
    NSMutableArray *_array;
    UIView *viewCouponBg;
    JDGoodShopResultModel *brandModel;
    id <JDShopDelegate> delegate;
    long long cellIndex;
}

@property(nonatomic) long long cellIndex; // @synthesize cellIndex;
@property(nonatomic) id <JDShopDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) JDGoodShopResultModel *brandModel; // @synthesize brandModel;
- (void)refreshSingleTicketView:(long long)arg1 couponStatus:(long long)arg2;
- (void)closeDiscountview;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)takeCouponWithCode:(long long)arg1;
- (void)updateDiscountTicketViews;
- (id)initWithFrame:(struct CGRect)arg1 withModel:(id)arg2 oldModel:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 withModel:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
