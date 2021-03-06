//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDAPICached, MDRoomRemind, NSDate, NSString, PacketRequest, QMSafeMutableArray;

@interface MDRoomManager : NSObject
{
    _Bool _newChatRoom;
    MDAPICached *_apiCached;
    QMSafeMutableArray *_cateList;
    QMSafeMutableArray *_partList;
    QMSafeMutableArray *_freshList;
    id <MDRoomManagerDelegate> _delegate;
    long long _refreshTime;
    long long _keepLiveTime;
    long long _remainTime;
    PacketRequest *_roomProfileRequest;
    NSString *_lastRoomid;
    NSString *_lastCateid;
    NSString *_refreshPullDown;
    NSString *_refreshChange;
    NSDate *_timeStampGateList;
    NSString *_reportRoomid;
    MDRoomRemind *_remind;
    long long _showtype;
    NSString *_gotoCateid;
}

@property(nonatomic) _Bool newChatRoom; // @synthesize newChatRoom=_newChatRoom;
@property(retain, nonatomic) NSString *gotoCateid; // @synthesize gotoCateid=_gotoCateid;
@property(nonatomic) long long showtype; // @synthesize showtype=_showtype;
@property(retain, nonatomic) MDRoomRemind *remind; // @synthesize remind=_remind;
@property(retain, nonatomic) NSString *reportRoomid; // @synthesize reportRoomid=_reportRoomid;
@property(retain, nonatomic) NSDate *timeStampGateList; // @synthesize timeStampGateList=_timeStampGateList;
@property(retain, nonatomic) NSString *refreshChange; // @synthesize refreshChange=_refreshChange;
@property(retain, nonatomic) NSString *refreshPullDown; // @synthesize refreshPullDown=_refreshPullDown;
@property(retain, nonatomic) NSString *lastCateid; // @synthesize lastCateid=_lastCateid;
@property(retain, nonatomic) NSString *lastRoomid; // @synthesize lastRoomid=_lastRoomid;
@property(retain, nonatomic) PacketRequest *roomProfileRequest; // @synthesize roomProfileRequest=_roomProfileRequest;
@property(nonatomic) long long remainTime; // @synthesize remainTime=_remainTime;
@property(nonatomic) long long keepLiveTime; // @synthesize keepLiveTime=_keepLiveTime;
@property(nonatomic) long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) __weak id <MDRoomManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) QMSafeMutableArray *freshList; // @synthesize freshList=_freshList;
@property(retain, nonatomic) QMSafeMutableArray *partList; // @synthesize partList=_partList;
@property(retain, nonatomic) QMSafeMutableArray *cateList; // @synthesize cateList=_cateList;
@property(retain, nonatomic) MDAPICached *apiCached; // @synthesize apiCached=_apiCached;
- (void).cxx_destruct;
- (_Bool)haveNewChatRoom;
- (void)setHaveNewChatRoom:(_Bool)arg1;
- (void)gotoDefaultList:(id)arg1;
- (void)gotoPartList:(id)arg1;
- (void)gotoCateList;
- (void)clearShowType;
- (void)resetGotoCateid:(id)arg1;
- (void)resetShowType:(long long)arg1;
- (void)clearRemind;
- (void)remindWithTime:(long long)arg1;
- (void)runRemindWithKeepLiveTime;
- (void)runRemindWithRemianTime;
- (void)joinChatroomError:(id)arg1;
- (void)joinChatroomFail:(id)arg1;
- (void)quitChatroomSuccess:(id)arg1;
- (void)setQuitRoomRequest:(id)arg1;
- (void)didFailStatusRequest:(id)arg1;
- (void)didFinishRoomProfileRequest:(id)arg1;
- (void)quickQuitRoom:(id)arg1;
- (void)showPartList:(id)arg1;
- (void)showCateList;
- (void)remainTimeFromServer;
- (id)roomFreshList;
- (id)freshRoom:(int)arg1;
- (void)roomColletPartListFromServer:(id)arg1;
- (void)roomPartListFromServer:(id)arg1;
- (void)checkGateListNeedFromServer;
- (void)roomGateListFromServer;
- (void)roomGateListFromCache;
- (void)registerRoomManagerDelegate:(id)arg1;
- (id)getRoomCateWithIDFromCache:(id)arg1;
- (long long)getKeepLiveTime;
- (long long)getRefrshTime;
- (void)resetRefreshChange:(id)arg1;
- (void)resetRefreshPullDown:(id)arg1;
- (id)reportRoomidFromCache;
- (void)resetReportRoomid:(id)arg1;
- (void)resetLastCateid:(id)arg1;
- (id)lastCateidFromCache;
- (void)resetLastRoomid:(id)arg1;
- (id)lastRoomidFromCache;
- (id)init;
- (void)dealloc;

@end

