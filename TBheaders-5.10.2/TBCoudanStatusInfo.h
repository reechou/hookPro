//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBModelStatusInfo.h"

@interface TBCoudanStatusInfo : TBModelStatusInfo
{
    CDUnknownBlockType _titleForEmptyBlock;	// 8 = 0x8
    CDUnknownBlockType _subTitleForEmptyBlock;	// 16 = 0x10
}

@property(copy, nonatomic) CDUnknownBlockType subTitleForEmptyBlock; // @synthesize subTitleForEmptyBlock=_subTitleForEmptyBlock;
@property(copy, nonatomic) CDUnknownBlockType titleForEmptyBlock; // @synthesize titleForEmptyBlock=_titleForEmptyBlock;
- (void).cxx_destruct;
- (id)imageForEmpty;
- (id)actionButtonTitleForEmpty;
- (id)subTitleForEmpty;
- (id)titleForEmpty;

@end

