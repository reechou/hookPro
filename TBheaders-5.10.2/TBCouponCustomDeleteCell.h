//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class TBCouponCustomDeleteData, TBCouponCustomDeleteTableView, UIButton;

@interface TBCouponCustomDeleteCell : UITableViewCell
{
    _Bool _selectToDelete;	// 8 = 0x8
    _Bool _isEditingFlag;	// 9 = 0x9
    _Bool _canDelete;	// 10 = 0xa
    UIButton *_selectDelButton;	// 16 = 0x10
    TBCouponCustomDeleteData *_customData;	// 24 = 0x18
    TBCouponCustomDeleteTableView *_tableView;	// 32 = 0x20
}

@property(nonatomic) __weak TBCouponCustomDeleteTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) TBCouponCustomDeleteData *customData; // @synthesize customData=_customData;
@property(retain, nonatomic) UIButton *selectDelButton; // @synthesize selectDelButton=_selectDelButton;
@property(nonatomic) _Bool canDelete; // @synthesize canDelete=_canDelete;
@property(nonatomic) _Bool isEditingFlag; // @synthesize isEditingFlag=_isEditingFlag;
@property(nonatomic) _Bool selectToDelete; // @synthesize selectToDelete=_selectToDelete;
- (void).cxx_destruct;
- (id)relatedTable;
- (id)deleteCustomDeleteData:(id)arg1;
- (void)removeFromDeleteArray;
- (void)addToDeleteArray;
- (void)operateDeleteArray;
- (void)selectDelButtonClick:(id)arg1;
- (void)selectChange;
- (void)imageChange;
- (void)endEdited:(_Bool)arg1;
- (void)willEditing:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

