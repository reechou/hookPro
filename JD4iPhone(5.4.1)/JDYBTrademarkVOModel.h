//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSArray, NSNumber, NSString;

@interface JDYBTrademarkVOModel : JDModel
{
    NSNumber *BrandId;
    NSArray *Sort;
    NSArray *YBConfigVOs;
    NSString *BrandName;
    NSString *BrandLinks;
    NSString *_sckuID;
    NSString *_suitID;
}

@property(retain, nonatomic) NSString *suitID; // @synthesize suitID=_suitID;
@property(retain, nonatomic) NSString *sckuID; // @synthesize sckuID=_sckuID;
@property(retain, nonatomic) NSString *BrandLinks; // @synthesize BrandLinks;
@property(retain, nonatomic) NSString *BrandName; // @synthesize BrandName;
@property(retain, nonatomic) NSArray *YBConfigVOs; // @synthesize YBConfigVOs;
@property(retain, nonatomic) NSArray *Sort; // @synthesize Sort;
@property(retain, nonatomic) NSNumber *BrandId; // @synthesize BrandId;
- (void)dealloc;
- (void)setDataWithDicFromCartYB:(id)arg1;
- (id)createYBConfigVOsFromCartYB:(id)arg1;
- (void)newSetDataWithDic:(id)arg1;
- (id)newCreateYBConfigVOs:(id)arg1;
- (void)setDataWithDic:(id)arg1;
- (id)createYBConfigVOs:(id)arg1;

@end
