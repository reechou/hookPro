//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TMMarketAttributedPriceGenerator : NSObject
{
}

+ (id)buildPriceAttributeStringWithCurrency:(id)arg1 currencySymbol:(id)arg2 price:(id)arg3 fontSize:(double)arg4 isOriginal:(_Bool)arg5;
+ (id)buildPriceAttributeStringWithOriginalPrice:(id)arg1 fontSize:(double)arg2;
+ (id)buildPriceAttributeStringWithMinPrice:(id)arg1 maxPrice:(id)arg2 integerSize:(double)arg3 decimalSize:(double)arg4;
+ (id)buildPriceAttributeStringWithPrice:(id)arg1 integerSize:(double)arg2 decimalSize:(double)arg3;
+ (id)buildPriceStringCutZeroDecimal:(id)arg1;
+ (id)attributeStringWithCurrencySymbol:(id)arg1 originalPrice:(id)arg2;
+ (id)attributeStringWithOriginalPrice:(id)arg1 type:(long long)arg2;
+ (id)attributeStringWithOriginalPrice:(id)arg1;
+ (id)attributeStringWithMinPrice:(id)arg1 maxPrice:(id)arg2 type:(long long)arg3;
+ (id)attributeStringWithCurrency:(id)arg1 currencySymbol:(id)arg2 price:(id)arg3 type:(long long)arg4;
+ (id)attributeStringWithPrice:(id)arg1 type:(long long)arg2;

@end

