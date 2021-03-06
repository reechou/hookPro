//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HomePageChannelFloorModel.h"

#import "HomePageChannelFloorCell.h"
#import "HomePageChannelNavigator.h"

@class HomePageChannelCategoryModel, NSArray, NSIndexPath, NSString, UIColor;

@interface HomePageChannelCategoryFloorModel : HomePageChannelFloorModel <HomePageChannelFloorCell, HomePageChannelNavigator>
{
    NSArray *_categoryList;
    NSString *_selectedColor;
    NSIndexPath *_indexPathForSelectedCategory;
    NSIndexPath *_previousSelectedIndexPath;
}

+ (id)objectClassInArray;
@property(retain, nonatomic) NSIndexPath *previousSelectedIndexPath; // @synthesize previousSelectedIndexPath=_previousSelectedIndexPath;
@property(retain, nonatomic) NSIndexPath *indexPathForSelectedCategory; // @synthesize indexPathForSelectedCategory=_indexPathForSelectedCategory;
@property(copy, nonatomic) NSString *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(copy, nonatomic) NSArray *categoryList; // @synthesize categoryList=_categoryList;
- (void).cxx_destruct;
- (id)actionForNavigatorItemAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long selectedNavigatorItemIndex;
@property(readonly, nonatomic) NSArray *navigatorItems;
- (id)actionAtIndexPath:(id)arg1;
@property(readonly, nonatomic) NSString *floorCellIdentifier;
- (id)pinnedFloorCell;
- (id)floorCells;
- (_Bool)isValid;
- (void)keyValuesDidFinishConvertingToObject;
- (void)selectCategoryAtIndexPath:(id)arg1;
@property(readonly, nonatomic) HomePageChannelCategoryModel *selectedCategory;
- (id)categoryAtIndexPath:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

