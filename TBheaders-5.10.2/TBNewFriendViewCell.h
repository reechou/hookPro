//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class TBAMPNewFriend, TBIMImageView, UIButton, UILabel, UIView;
@protocol TBNewFriendViewCellDelegate;

@interface TBNewFriendViewCell : UITableViewCell
{
    id <TBNewFriendViewCellDelegate> _delegate;	// 8 = 0x8
    TBAMPNewFriend *_friendData;	// 16 = 0x10
    TBIMImageView *_avatarImageView;	// 24 = 0x18
    UILabel *_nameLabel;	// 32 = 0x20
    UILabel *_descriptionLabel;	// 40 = 0x28
    UILabel *_authLabel;	// 48 = 0x30
    UILabel *_addedLabel;	// 56 = 0x38
    UIButton *_addButton;	// 64 = 0x40
    UIButton *_receivedButton;	// 72 = 0x48
    UIView *_bottomLineView;	// 80 = 0x50
}

+ (long long)cellHeight;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIButton *receivedButton; // @synthesize receivedButton=_receivedButton;
@property(retain, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) UILabel *addedLabel; // @synthesize addedLabel=_addedLabel;
@property(retain, nonatomic) UILabel *authLabel; // @synthesize authLabel=_authLabel;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) TBIMImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) TBAMPNewFriend *friendData; // @synthesize friendData=_friendData;
@property(nonatomic) __weak id <TBNewFriendViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)agreeButton:(id)arg1;
- (void)prepareForReuse;
- (void)updateButtonStatus:(long long)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

