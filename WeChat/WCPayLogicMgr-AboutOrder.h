//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayLogicMgr.h"

@interface WCPayLogicMgr (AboutOrder)
- (unsigned int)GetStatusChangedOrderListCount;
- (id)GetStatusChangedOrderList;
- (void)RemoveAllStatusChangedOrder;
- (void)RemoveStatusChangedOrderDetail:(id)arg1;
- (void)AddStatusChangedOrderDetail:(id)arg1;
- (void)SetEvaluateOrder:(id)arg1;
- (void)GetIAPHistoryOrderDetailInfo:(id)arg1;
- (void)GetHistoryOrderDetailInfo:(id)arg1 PayType:(int)arg2;
- (void)GetWebPayOrderDetailInfoAndBindQueryNew:(id)arg1;
- (void)GetOrderDetailInfoAndBindQueryNew:(id)arg1 ProductsID:(id)arg2 UsedBalance:(int)arg3 Scene:(int)arg4 payScene:(int)arg5;
- (void)GetOrderDetailInfoAndBindQueryNew:(id)arg1 ProductsID:(id)arg2 UsedBalance:(int)arg3 Scene:(int)arg4;
- (void)GetOrderDetailInfo:(id)arg1 ProductsID:(id)arg2 UsedBalance:(int)arg3;
- (void)DeleteAllOrder;
- (void)DeleteOrder:(id)arg1 PayType:(unsigned int)arg2;
- (void)GetOrderList:(unsigned int)arg1 Limit:(unsigned int)arg2;
- (void)clearOrderListCache;
- (void)insideCallBackEvaluateOrderErrorResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackEvaluateOrderResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackWCPayGetOrderHistoryResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackWCPayGetOrderHistoryErrorResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackWCPayDelOrderHistoryResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackWCPayDelOrderHistoryErrorResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackWCBizIapOrderDetailErrorResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackWCBizIapOrderDetailResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackGetHistoryOrderDetailInfo:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackGetOrderDetailInfo:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackGetWebPayOrderDetailInfoAndBindQueryNew:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackGetOrderDetailInfoAndBindQueryNew:(id)arg1 OnRequest:(id)arg2;
- (id)GetAllOrderCanPayBank:(id)arg1;
@end
