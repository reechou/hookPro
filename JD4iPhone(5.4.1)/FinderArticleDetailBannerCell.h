//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDFinderTableViewCell.h"

@class FinderArticleJumpModel, JDImageView;

@interface FinderArticleDetailBannerCell : JDFinderTableViewCell
{
    JDImageView *_img;
    CDUnknownBlockType _clickImg;
    FinderArticleJumpModel *_jump;
}

@property(retain, nonatomic) FinderArticleJumpModel *jump; // @synthesize jump=_jump;
@property(copy, nonatomic) CDUnknownBlockType clickImg; // @synthesize clickImg=_clickImg;
- (void).cxx_destruct;
- (void)tapImage:(id)arg1;
- (void)assignValue:(id)arg1;
- (void)layoutSubviews;
- (void)setupViews;

@end
