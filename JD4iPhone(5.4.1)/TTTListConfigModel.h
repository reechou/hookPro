//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTTBaseModel.h"

#import "TTTJumpProtocol.h"

@class NSString, TTTJumpModel;

@interface TTTListConfigModel : TTTBaseModel <TTTJumpProtocol>
{
    NSString *_jdPrice;
    NSString *_slogan;
    NSString *_subscript;
    NSString *_sloganPicture;
    NSString *_showAppPrice;
    NSString *_showGoodCount;
    NSString *_buttonText;
    NSString *_buttonTextColor;
    NSString *_buttonBackgroundColor;
    NSString *_showMore;
    TTTJumpModel *_jump;
    NSString *_advanceDeposit;
    NSString *_stock;
    NSString *_cartButtonTxt;
    NSString *_cartStyle;
    NSString *_cartBackgroundColor;
    NSString *_titleColor;
    NSString *_cardColor;
    NSString *_promotionTagColor;
    NSString *_mainPriceColor;
    NSString *_assistPriceColor;
    NSString *_sloganColor;
}

+ (id)replacedKeyFromPropertyName;
@property(copy, nonatomic) NSString *sloganColor; // @synthesize sloganColor=_sloganColor;
@property(copy, nonatomic) NSString *assistPriceColor; // @synthesize assistPriceColor=_assistPriceColor;
@property(copy, nonatomic) NSString *mainPriceColor; // @synthesize mainPriceColor=_mainPriceColor;
@property(copy, nonatomic) NSString *promotionTagColor; // @synthesize promotionTagColor=_promotionTagColor;
@property(copy, nonatomic) NSString *cardColor; // @synthesize cardColor=_cardColor;
@property(copy, nonatomic) NSString *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSString *cartBackgroundColor; // @synthesize cartBackgroundColor=_cartBackgroundColor;
@property(copy, nonatomic) NSString *cartStyle; // @synthesize cartStyle=_cartStyle;
@property(copy, nonatomic) NSString *cartButtonTxt; // @synthesize cartButtonTxt=_cartButtonTxt;
@property(copy, nonatomic) NSString *stock; // @synthesize stock=_stock;
@property(copy, nonatomic) NSString *advanceDeposit; // @synthesize advanceDeposit=_advanceDeposit;
@property(retain, nonatomic) TTTJumpModel *jump; // @synthesize jump=_jump;
@property(copy, nonatomic) NSString *showMore; // @synthesize showMore=_showMore;
@property(copy, nonatomic) NSString *buttonBackgroundColor; // @synthesize buttonBackgroundColor=_buttonBackgroundColor;
@property(copy, nonatomic) NSString *buttonTextColor; // @synthesize buttonTextColor=_buttonTextColor;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(copy, nonatomic) NSString *showGoodCount; // @synthesize showGoodCount=_showGoodCount;
@property(copy, nonatomic) NSString *showAppPrice; // @synthesize showAppPrice=_showAppPrice;
@property(copy, nonatomic) NSString *sloganPicture; // @synthesize sloganPicture=_sloganPicture;
@property(copy, nonatomic) NSString *subscript; // @synthesize subscript=_subscript;
@property(copy, nonatomic) NSString *slogan; // @synthesize slogan=_slogan;
@property(copy, nonatomic) NSString *jdPrice; // @synthesize jdPrice=_jdPrice;
- (void).cxx_destruct;
- (id)sencondJumpObject;
- (id)firstJumpObject;
- (void)keyValuesDidFinishConvertingToObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
