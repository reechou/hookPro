//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBXSearchComboViewComponentBase.h"

@class NXView, TBXSearchTipsViewModel;

@interface TBXSearchTipsComponentNx : TBXSearchComboViewComponentBase
{
    TBXSearchTipsViewModel *_viewModel;	// 8 = 0x8
    NXView *_nxView;	// 16 = 0x10
}

@property(retain, nonatomic) NXView *nxView; // @synthesize nxView=_nxView;
@property(retain, nonatomic) TBXSearchTipsViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)dataLoaded;
- (void)setTheViewModel:(id)arg1;

@end

