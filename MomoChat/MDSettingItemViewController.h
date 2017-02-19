//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDViewController.h"

#import "FlowManagerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MBProgressHUD, NSMutableArray, NSString, UITableView;

@interface MDSettingItemViewController : MDViewController <UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate, FlowManagerDelegate>
{
    UITableView *_tableList;
    NSMutableArray *_cellModelGroups;
    MBProgressHUD *_hud;
}

@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud=_hud;
@property(retain, nonatomic) NSMutableArray *cellModelGroups; // @synthesize cellModelGroups=_cellModelGroups;
@property(retain, nonatomic) UITableView *tableList; // @synthesize tableList=_tableList;
- (void)getPhoneContactFail:(id)arg1;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)removeHud;
- (void)showHud;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)leftBarButtonItemDidSelected:(id)arg1;
- (void)refreshViewByNotification:(id)arg1;
- (void)removeObservers;
- (void)addObservers;
- (void)functionSettingCellClicked;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)faceRecCellClicked;
- (void)doLogout;
- (void)handleLogoutAlert:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showLogoutAlert;
- (void)logoutCellClicked;
- (void)handleClearCacheAlert:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showClearCacheAlert;
- (void)clearCacheCellClicked;
- (void)gotoBlockedList;
- (void)blackListCellClicked;
- (void)chatBackgroundCellClicked;
- (void)checkShopStatus;
- (void)userHelpCellClicked;
- (void)videoPlayCellClicked;
- (void)messageNotifyCellClicked;
- (void)accountBindCellClicked;
- (void)phoneBindCellClicked;
- (void)checkSecurityStatus;
- (id)accountBindCellModel;
- (id)faceRecCellModel;
- (id)logoutCellModel;
- (id)userHelpCellModel;
- (id)applyLBAModel;
- (id)shopCenterModel;
- (id)clearCacheCellModel;
- (id)blackListCellModel;
- (id)friendSortCellModel;
- (id)chatBackgroundCellModel;
- (id)videoPlayCellModel;
- (id)functionSettingModel;
- (id)messageNotifyCellModel;
- (id)securityCenterCellModel;
- (void)setupCellModelGroup5;
- (void)setupCellModelGroup4;
- (void)setupCellModelGroup3;
- (void)setupCellModelGroup2;
- (void)setupCellModelGroup1;
- (void)setupCellModelGroup0;
- (void)setupGuestModelGroup;
- (void)setupCellGroups;
- (void)refreshView;
- (void)addCellModel:(id)arg1 forGroup:(id)arg2;
- (void)back;
- (void)setupNaviBar;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
