//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDContentItem.h"

@class UILabel;

@interface JDMOrderCouponView : JDContentItem
{
    long long m_canusedCount;
    double m_discountMoney;
    UILabel *m_canUsedLab;
    UILabel *m_usedLab;
}

@property(retain, nonatomic) UILabel *m_usedLab; // @synthesize m_usedLab;
@property(retain, nonatomic) UILabel *m_canUsedLab; // @synthesize m_canUsedLab;
@property(nonatomic) double m_discountMoney; // @synthesize m_discountMoney;
@property(nonatomic) long long m_canusedCount; // @synthesize m_canusedCount;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

