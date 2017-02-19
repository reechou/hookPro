//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AVPlayerItemOutputPullDelegate-Protocol.h"
#import "VRMediaPlayerProtocol-Protocol.h"

@class AVPlayer, AVPlayerItem, AVPlayerItemVideoOutput, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface PPKAVVideo : NSObject <AVPlayerItemOutputPullDelegate, VRMediaPlayerProtocol>
{
    float _volume;	// 8 = 0x8
    _Bool _isMute;	// 12 = 0xc
    _Bool _isRemovedObserver;	// 13 = 0xd
    _Bool _didPostReadyToPlay;	// 14 = 0xe
    _Bool _didPostBufferingStop;	// 15 = 0xf
    _Bool _didPostBufferingStart;	// 16 = 0x10
    AVPlayer *_player;	// 24 = 0x18
    NSURL *_videoPath;	// 32 = 0x20
    struct __CVBuffer *_currentVideoFrame;	// 40 = 0x28
    long long _playStatus;	// 48 = 0x30
    AVPlayerItemVideoOutput *_videoOutput;	// 56 = 0x38
    AVPlayerItem *_playerItem;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_myVideoOutputQueue;	// 72 = 0x48
    long long _lastPlayState;	// 80 = 0x50
    double _currentBufferPersent;	// 88 = 0x58
}

@property double currentBufferPersent; // @synthesize currentBufferPersent=_currentBufferPersent;
@property _Bool didPostBufferingStart; // @synthesize didPostBufferingStart=_didPostBufferingStart;
@property _Bool didPostBufferingStop; // @synthesize didPostBufferingStop=_didPostBufferingStop;
@property _Bool didPostReadyToPlay; // @synthesize didPostReadyToPlay=_didPostReadyToPlay;
@property(nonatomic) long long lastPlayState; // @synthesize lastPlayState=_lastPlayState;
@property(nonatomic) _Bool isRemovedObserver; // @synthesize isRemovedObserver=_isRemovedObserver;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *myVideoOutputQueue; // @synthesize myVideoOutputQueue=_myVideoOutputQueue;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) AVPlayerItemVideoOutput *videoOutput; // @synthesize videoOutput=_videoOutput;
@property(nonatomic) long long playStatus; // @synthesize playStatus=_playStatus;
@property(nonatomic) struct __CVBuffer *currentVideoFrame; // @synthesize currentVideoFrame=_currentVideoFrame;
@property(nonatomic) _Bool isMute; // @synthesize isMute=_isMute;
@property(retain, nonatomic) NSURL *videoPath; // @synthesize videoPath=_videoPath;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (_Bool)cleanupPlayerItem;
- (void)dealloc;
- (void)removePPKAVVideoObserver;
- (void)initPPKAVVideoObserver;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (CDStruct_1b6d18a9)duration;
- (_Bool)retrievePixelBufferToDraw;
- (void)outputMediaDataWillChange:(id)arg1;
- (void)configVideoOutput;
- (double)bufferPersent;
- (void)getBufferPercent;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)currentTime;
- (_Bool)recoverPlayerItem;
- (void)stop;
- (void)pause;
- (void)play;
- (void)setupVideoPlaybackForURL:(id)arg1;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(readonly, nonatomic) long long status;
- (id)initWithVideoPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isMuted) _Bool muted;
@property(readonly) Class superclass;

@end
