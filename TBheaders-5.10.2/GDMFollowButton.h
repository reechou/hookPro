//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface GDMFollowButton : UIButton
{
    _Bool _isFollow;	// 8 = 0x8
}

@property(nonatomic) _Bool isFollow; // @synthesize isFollow=_isFollow;
- (void)showHideStatus;
- (void)showUnfollowedStatus;
- (void)showFollowedStatus;
- (void)followAction:(id)arg1;
- (void)initWithDefault;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

