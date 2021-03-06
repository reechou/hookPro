//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DRItem, NSNumber, NSString, UIImageView, UIView;

@protocol DRContextProtocol <NSObject>
- (void)reset;
- (void)clear;
- (_Bool)resetWithModuleName:(NSString *)arg1;
- (void)clearWithModuleName:(NSString *)arg1;
- (UIImageView *)imageViewWithDRItem:(DRItem *)arg1 imageTag:(NSNumber *)arg2;
- (_Bool)isContextReadyWithRenderType:(NSString *)arg1;
- (_Bool)isContextReadyWithDRItem:(DRItem *)arg1;
- (void)refreshWithDRItem:(DRItem *)arg1;
- (void)bindDataWithDRItem:(DRItem *)arg1;
- (UIView *)dItemViewWithDRItem:(DRItem *)arg1;
- (void)initContextWithModuleName:(NSString *)arg1;
@end

