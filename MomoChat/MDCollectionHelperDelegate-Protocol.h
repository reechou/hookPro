//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, NSString, UICollectionReusableView, UICollectionViewCell;

@protocol MDCollectionHelperDelegate <NSObject>
- (NSString *)cellReuseIdentifer:(long long)arg1;

@optional
- (void)didEndDisplayingCell:(UICollectionViewCell *)arg1 forItemAtIndexPath:(long long)arg2;
- (void)willDisplayCell:(UICollectionViewCell *)arg1 forItemAtIndexPath:(long long)arg2;
- (UICollectionReusableView *)sectionFooterAtIndexPath:(NSIndexPath *)arg1;
- (NSString *)footerReuseIdentifer:(long long)arg1;
- (UICollectionReusableView *)sectionHeaderAtIndexPath:(NSIndexPath *)arg1;
- (NSString *)headerReuseIdentifer:(long long)arg1;
- (void)didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)cell:(UICollectionViewCell *)arg1 atIndexPath:(NSIndexPath *)arg2;
@end

