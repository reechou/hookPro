//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDRegBaseViewController.h"

#import "MDConditionCheckViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MDCreateCommonGroupProfile, NSDictionary, NSMutableArray, NSString, UIButton, UIImageView, UILabel, UITableView;

@interface MDGroupApplyViewController : MDRegBaseViewController <UITableViewDelegate, UITableViewDataSource, MDConditionCheckViewDelegate>
{
    int _applyType;
    UILabel *_labelTipOne;
    UILabel *_labelTipTwo;
    UIButton *_btnLearnMore;
    UITableView *_unApplyTableview;
    NSMutableArray *_conditionList;
    MDCreateCommonGroupProfile *_commonGroupProfile;
    NSDictionary *_permissionsInfo;
    UIImageView *_bgImageView;
}

+ (void)presentToCommonGroupWithPartyid:(id)arg1;
+ (void)presentViewController;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) NSDictionary *permissionsInfo; // @synthesize permissionsInfo=_permissionsInfo;
@property(retain, nonatomic) MDCreateCommonGroupProfile *commonGroupProfile; // @synthesize commonGroupProfile=_commonGroupProfile;
@property(nonatomic) int applyType; // @synthesize applyType=_applyType;
@property(retain, nonatomic) NSMutableArray *conditionList; // @synthesize conditionList=_conditionList;
@property(retain, nonatomic) UITableView *unApplyTableview; // @synthesize unApplyTableview=_unApplyTableview;
@property(retain, nonatomic) UIButton *btnLearnMore; // @synthesize btnLearnMore=_btnLearnMore;
@property(retain, nonatomic) UILabel *labelTipTwo; // @synthesize labelTipTwo=_labelTipTwo;
@property(retain, nonatomic) UILabel *labelTipOne; // @synthesize labelTipOne=_labelTipOne;
- (void).cxx_destruct;
- (void)didClickConditionCheckView:(id)arg1 gotoAction:(id)arg2;
- (void)learnMoreButtonClicked;
- (void)leftButtonClicked;
- (void)nextbuttonClicked;
- (void)checkCreateGroupAuthorityError:(id)arg1;
- (void)checkCreateGroupAuthorityFail:(id)arg1;
- (void)resetlimitedView;
- (void)checkCreateGroupAuthoritySuccess:(id)arg1;
- (void)checkCreateGroupAuthority;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)addRequestPermissions:(id)arg1 withDisAgreeList:(id)arg2;
- (void)setLabelTipTwoTitle:(id)arg1;
- (void)setLabelTipOneTitle:(id)arg1;
- (id)header;
- (void)setUpBG;
- (void)presentViewControllerWithParams:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithCommonGroupProfile:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

