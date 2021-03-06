//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class JDBoldFontLabel, JDIcon, JDImageView, UIButton, UIImageView, UILabel, WareReplyCommentCellBackView, WareReplyCommentModel;

@interface WareRelpyCommentCell : UITableViewCell
{
    WareReplyCommentCellBackView *backgroundView;
    JDImageView *userHeaderView;
    UILabel *userNameLabel;
    UIImageView *userLevelIcon;
    UILabel *replyFloor;
    UIButton *replyButton;
    JDBoldFontLabel *replyDatail;
    UILabel *replyDate;
    JDIcon *icon;
    id <WareReplyCommentCellDelegate> delegate;
    WareReplyCommentModel *model;
}

@property(retain, nonatomic) WareReplyCommentModel *model; // @synthesize model;
@property(nonatomic) __weak id <WareReplyCommentCellDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (void)viewDidTaped:(id)arg1;
- (void)reply;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setDetailAttributSting:(id)arg1;

@end

