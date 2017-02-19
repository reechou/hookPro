//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBTakeoutNewViewModel.h"

@class NSString;

@interface TBTakeoutOrderDetailTradeViewModel : TBTakeoutNewViewModel
{
    unsigned long long _dataCount;	// 8 = 0x8
    NSString *_autoConfirmTime;	// 16 = 0x10
    NSString *_tbOrderId;	// 24 = 0x18
    NSString *_alipayNo;	// 32 = 0x20
    NSString *_createTime;	// 40 = 0x28
    NSString *_payTime;	// 48 = 0x30
    NSString *_acceptTime;	// 56 = 0x38
    NSString *_finishTime;	// 64 = 0x40
}

@property(copy, nonatomic) NSString *finishTime; // @synthesize finishTime=_finishTime;
@property(copy, nonatomic) NSString *acceptTime; // @synthesize acceptTime=_acceptTime;
@property(copy, nonatomic) NSString *payTime; // @synthesize payTime=_payTime;
@property(copy, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *alipayNo; // @synthesize alipayNo=_alipayNo;
@property(copy, nonatomic) NSString *tbOrderId; // @synthesize tbOrderId=_tbOrderId;
@property(copy, nonatomic) NSString *autoConfirmTime; // @synthesize autoConfirmTime=_autoConfirmTime;
@property(nonatomic) unsigned long long dataCount; // @synthesize dataCount=_dataCount;
- (void).cxx_destruct;
- (void)parseResult:(id)arg1;

@end
