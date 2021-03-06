//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBTradeRecmdManager-Protocol.h"

@class NSMutableArray, NSString, TBTradeRecmdCellModel, TBTradeRecmdCellView, TBTradeRecmdContext;
@protocol TBTradeRecmdManager;

@interface TBTradeRecmdCellManager : NSObject <TBTradeRecmdManager>
{
    NSString *_identifier;	// 8 = 0x8
    double _totalItemHeight;	// 16 = 0x10
    NSMutableArray<TBTradeRecmdManager> *_childManagers;	// 24 = 0x18
    id <TBTradeRecmdManager> _parent;	// 32 = 0x20
    double _itemHeight;	// 40 = 0x28
    TBTradeRecmdCellView *_view;	// 48 = 0x30
    long long _itemNumInOneCell;	// 56 = 0x38
    TBTradeRecmdCellModel *_model;	// 64 = 0x40
    TBTradeRecmdContext *_context;	// 72 = 0x48
}

@property(retain, nonatomic) TBTradeRecmdContext *context; // @synthesize context=_context;
@property(retain, nonatomic) TBTradeRecmdCellModel *model; // @synthesize model=_model;
@property(nonatomic) long long itemNumInOneCell; // @synthesize itemNumInOneCell=_itemNumInOneCell;
@property(retain, nonatomic) TBTradeRecmdCellView *view; // @synthesize view=_view;
@property(nonatomic) double itemHeight; // @synthesize itemHeight=_itemHeight;
@property(retain, nonatomic) NSMutableArray<TBTradeRecmdManager> *childManagers; // @synthesize childManagers=_childManagers;
@property(nonatomic) __weak id <TBTradeRecmdManager> parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (void)updateCell:(id)arg1;
- (void)updateView:(id)arg1;
- (id)childManagerAtIndex:(long long)arg1;
- (id)cell;
- (id)totalView;
- (void)freeView;
- (double)totalItemHeight;
- (void)setTotalItemHeight:(double)arg1;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithData:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

