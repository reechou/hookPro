//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMJClientMessageManager, MDSourceTimer, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>;

@interface MDLVReplyCoordinator : NSObject
{
    NSObject<OS_dispatch_semaphore> *_lock;
    _Bool _pulling;
    NSMutableDictionary *_lvCache;
    MDSourceTimer *_delayTimer;
    IMJClientMessageManager *_manager;
    NSObject<OS_dispatch_queue> *_timerTargetQueue;
}

+ (id)sharedCoordinator;
@property(nonatomic) NSObject<OS_dispatch_queue> *timerTargetQueue; // @synthesize timerTargetQueue=_timerTargetQueue;
@property(retain, nonatomic) IMJClientMessageManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) MDSourceTimer *delayTimer; // @synthesize delayTimer=_delayTimer;
@property(retain, nonatomic) NSMutableDictionary *lvCache; // @synthesize lvCache=_lvCache;
@property(nonatomic, getter=isPulling) _Bool pulling; // @synthesize pulling=_pulling;
- (void)handleIMJLogout;
- (id)currentLvForLt:(id)arg1;
- (void)didFinishWritingOfLvsDictionary:(id)arg1;
- (void)handleWritenPacket:(id)arg1;
- (void)didFinishWritingPacketOfLv:(id)arg1 lt:(id)arg2;
- (void)sendFinPacket;
- (void)resetTimer;
- (void)dealloc;
- (id)initWithMessageManager:(id)arg1 timerTargetQueue:(id)arg2;
- (id)init;
- (id)initCoordinator;

@end
