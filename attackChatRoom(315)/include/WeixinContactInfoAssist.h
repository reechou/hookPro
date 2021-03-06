//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBaseContactInfoAssist.h"
#import "CContact.h"

@interface WeixinContactInfoAssist : CBaseContactInfoAssist
{
    BOOL m_bFirstBecomeFriend;	// 40 = 0x28
    UIButton *m_greenBtn;	// 44 = 0x2c
    BOOL m_hasRequestUpdateAlbum;	// 52 = 0x34
    NSString *m_location;	// 56 = 0x38
    CContact *m_chatContact;	// 60 = 0x3c
    unsigned long m_uiVerify;	// 64 = 0x40
    NSMutableArray *m_arrayAlbum;	// 68 = 0x44
    int m_curDownloadEntrance;	// 72 = 0x48
    NSString *m_cpKeyForNickname;	// 80 = 0x50
    NSString *m_cpKeyForChatRoomDisplayName;	// 84 = 0x54
    NSString *m_cpKeyForSignature;	// 88 = 0x58
    BOOL m_isNickNameUnsafe;	// 92 = 0x5c
    BOOL m_isChatRoomDisplayNameUnsafe;	// 93 = 0x5d
    BOOL m_isSignatureUnsafe;	// 94 = 0x5e
}

- (id)init;	// IMP=0x0124fb19
- (void)contactVerifyOk:(id)arg1 opCode:(unsigned long)arg2;	// IMP=0x0124f5e3
- (void)handleAddedContact;	// IMP=0x0124f4ab
- (void)onVerifyContactOk;	// IMP=0x0124f413
- (void)onRelpyContact:(id)arg1;	// IMP=0x0124f3bf
- (void)onVerifyContact:(id)arg1 opcode:(unsigned long)arg2;	// IMP=0x0124f0ab
- (void)verifyContactWithOpCode:(unsigned long)arg1;	// IMP=0x0124eccf
- (void)onStartChat:(id)arg1;	// IMP=0x0124ec71
- (void)onNewMessage:(id)arg1;	// IMP=0x0124ec13
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;	// IMP=0x0124e9e7
- (void)doDeleteContact;	// IMP=0x0124e85d
- (void)onAction;	// IMP=0x0124e6ed
- (void)opBlackList:(id)arg1;	// IMP=0x0124e687
- (void)onOpenVoiceVoipView;	// IMP=0x0124e593
- (void)onOpenVoipView;	// IMP=0x0124e49d
- (void)onExposeByRecommand;	// IMP=0x0124df55
- (void)doAddToBlackList;	// IMP=0x0124de97
- (void)addToBlackList:(id)arg1;	// IMP=0x0124dc81
- (void)removeFromBlackList;	// IMP=0x0124db67
- (void)showRightButton;	// IMP=0x0124d8af
- (void)initFooterView;	// IMP=0x0124d7bb
- (void)initBlackListTipsLabel;	// IMP=0x0124d563
- (void)initFooterBtnArea;	// IMP=0x0124d2f3
- (void)updateToBigSendMsgBtn;	// IMP=0x0124d1fd
- (void)initBlackAndExposeContactBtn;	// IMP=0x0124cd35
- (void)initExposeBtn;	// IMP=0x0124cb81
- (void)initAddContactBtn;	// IMP=0x0124c9c3
- (void)initVerifyBtn;	// IMP=0x0124c829
- (void)initSayHelloBtn;	// IMP=0x0124c68f
- (void)showAlbumList;	// IMP=0x0124c3e9
- (void)onSayHelloToContact;	// IMP=0x0124c3b3
- (void)initWCPrivacyButton;	// IMP=0x0124c175
- (void)onOpenVoipActionSheet:(id)arg1;	// IMP=0x0124bbfd
- (BOOL)initVoipBtn;	// IMP=0x0124b8c1
- (void)initSendMsgBtn;	// IMP=0x0124b5f9
- (void)initDeleteBtn;	// IMP=0x0124b45f
- (void)reloadTableView;	// IMP=0x0124b25d
- (void)initData;	// IMP=0x01249903
- (void)makeEditRemarkNameCell:(id)arg1 CellInfo:(id)arg2;	// IMP=0x012497c9
- (void)makePhoneCell:(id)arg1 CellInfo:(id)arg2;	// IMP=0x01249073
- (void)makeMoreCell:(id)arg1 CellInfo:(id)arg2;	// IMP=0x01248593
- (void)makeLeftValueCell:(id)arg1 CellInfo:(id)arg2;	// IMP=0x01248171
- (void)makeTagsCell:(id)arg1 CellInfo:(id)arg2;	// IMP=0x012478e9
- (void)makeDescriptionCell:(id)arg1 CellInfo:(id)arg2;	// IMP=0x01247299
- (void)makeAlbumCell:(id)arg1 CellInfo:(id)arg2;	// IMP=0x01246b27
- (void)makeCellTitle:(id)arg1 Title:(id)arg2 MaxWidth:(float)arg3;	// IMP=0x012467d9
- (void)makeHeadCell:(id)arg1 CellInfo:(id)arg2;	// IMP=0x01244917
- (id)makeHeadSmallLabel:(id)arg1 Y:(float)arg2 text:(id)arg3 cpKey:(id)arg4 inUnsafe:(BOOL)arg5;	// IMP=0x01244483
- (void)opSetWCStrangerPermissions;	// IMP=0x01244321
- (void)opSetWCPermissions;	// IMP=0x01244187
- (void)opEditRemarkName;	// IMP=0x01244099
- (void)tryCall:(id)arg1;	// IMP=0x01243f2f
- (void)onSocialInfoHandle;	// IMP=0x01243e55
- (void)updateFooterView;	// IMP=0x01243e45
- (BOOL)IsShowUserName;	// IMP=0x01243c77
- (BOOL)isNeedHideUserName;	// IMP=0x01243b89
- (BOOL)hasMore;	// IMP=0x01243ae3
- (BOOL)isShowAddFriendScene;	// IMP=0x01243967
- (BOOL)isFromQRCode;	// IMP=0x01243921
- (id)getInfoDisplayName;	// IMP=0x0124384b
- (BOOL)isNeedVerify;	// IMP=0x012437cf
- (BOOL)isShowExposeButton;	// IMP=0x012436cb
- (BOOL)isShowBlackAction;	// IMP=0x0124362d
- (BOOL)isNeedShowRightBtn;	// IMP=0x01243583
- (void)initTableView;	// IMP=0x01243471
- (id)GetTableView;	// IMP=0x01243453
- (BOOL)isFromStrangeScene;	// IMP=0x012433c9
- (void)loadLocalContactData;	// IMP=0x01242e8d

@end

