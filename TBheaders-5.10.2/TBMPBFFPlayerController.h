//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AppMonitorTable, NSString, NSTimer, UIView;
@protocol OS_dispatch_source;

@interface TBMPBFFPlayerController : NSObject
{
    _Bool _shouldShowHudView;	// 8 = 0x8
    _Bool _isPreparedToPlay;	// 9 = 0x9
    _Bool _isFirstVideoFrameRendered;	// 10 = 0xa
    _Bool _isReportedFirstVideoFrameRenderedEvent;	// 11 = 0xb
    int _logReportIntervalSeconds;	// 12 = 0xc
    id _ijkFFPlayer;	// 16 = 0x10
    UIView *_playerView;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_logTimer;	// 32 = 0x20
    double _startPlayTime;	// 40 = 0x28
    double _startBufferTime;	// 48 = 0x30
    double _lastBufferLoadReportTime;	// 56 = 0x38
    NSTimer *_checkTimer;	// 64 = 0x40
    NSString *_liveURL;	// 72 = 0x48
    NSString *_liveIP;	// 80 = 0x50
    AppMonitorTable *_firstVideoFrameMonitorTable;	// 88 = 0x58
    AppMonitorTable *_firstAudioFrameMonitorTable;	// 96 = 0x60
    AppMonitorTable *_bufferLoadMonitorTable;	// 104 = 0x68
    AppMonitorTable *_ptsdtsMonitorTable;	// 112 = 0x70
    AppMonitorTable *_networkShakeTable;	// 120 = 0x78
    long long _counter;	// 128 = 0x80
}

@property(nonatomic) long long counter; // @synthesize counter=_counter;
@property(retain, nonatomic) AppMonitorTable *networkShakeTable; // @synthesize networkShakeTable=_networkShakeTable;
@property(retain, nonatomic) AppMonitorTable *ptsdtsMonitorTable; // @synthesize ptsdtsMonitorTable=_ptsdtsMonitorTable;
@property(retain, nonatomic) AppMonitorTable *bufferLoadMonitorTable; // @synthesize bufferLoadMonitorTable=_bufferLoadMonitorTable;
@property(retain, nonatomic) AppMonitorTable *firstAudioFrameMonitorTable; // @synthesize firstAudioFrameMonitorTable=_firstAudioFrameMonitorTable;
@property(retain, nonatomic) AppMonitorTable *firstVideoFrameMonitorTable; // @synthesize firstVideoFrameMonitorTable=_firstVideoFrameMonitorTable;
@property(copy, nonatomic) NSString *liveIP; // @synthesize liveIP=_liveIP;
@property(copy, nonatomic) NSString *liveURL; // @synthesize liveURL=_liveURL;
@property(nonatomic) _Bool isReportedFirstVideoFrameRenderedEvent; // @synthesize isReportedFirstVideoFrameRenderedEvent=_isReportedFirstVideoFrameRenderedEvent;
@property(nonatomic) _Bool isFirstVideoFrameRendered; // @synthesize isFirstVideoFrameRendered=_isFirstVideoFrameRendered;
@property(retain, nonatomic) NSTimer *checkTimer; // @synthesize checkTimer=_checkTimer;
@property(nonatomic) int logReportIntervalSeconds; // @synthesize logReportIntervalSeconds=_logReportIntervalSeconds;
@property(nonatomic) double lastBufferLoadReportTime; // @synthesize lastBufferLoadReportTime=_lastBufferLoadReportTime;
@property(nonatomic) double startBufferTime; // @synthesize startBufferTime=_startBufferTime;
@property(nonatomic) double startPlayTime; // @synthesize startPlayTime=_startPlayTime;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *logTimer; // @synthesize logTimer=_logTimer;
@property(nonatomic) __weak UIView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) id ijkFFPlayer; // @synthesize ijkFFPlayer=_ijkFFPlayer;
@property(nonatomic) _Bool isPreparedToPlay; // @synthesize isPreparedToPlay=_isPreparedToPlay;
- (void).cxx_destruct;
- (void)removeObservers;
- (void)addObservers;
- (void)frameQueueNull:(id)arg1;
- (void)decodeError:(id)arg1;
- (void)avformatTime:(id)arg1;
- (void)networkShake:(id)arg1;
- (void)streamAbnormal:(id)arg1;
- (void)receivePTS:(id)arg1;
- (void)firstAudioFrameRendered:(id)arg1;
- (void)firstVideoFrameRendered:(id)arg1;
- (void)playBackStateDidChange:(id)arg1;
- (void)playBackIsPreparedToPlayDidChange:(id)arg1;
- (void)playBackDidFinish:(id)arg1;
- (void)loadStateDidChange:(id)arg1;
- (void)checkIfFirstVideoFrameRendered;
- (void)logPlayerStatus;
- (void)stopLogTimer;
- (void)startLogTimer;
- (id)thumbnailImageAtCurrentTime;
- (id)getPlayerStatusKeyData:(id)arg1;
- (long long)playbackState;
- (unsigned long long)loadState;
- (_Bool)isPlaying;
- (void)shutdown;
- (void)stop;
- (void)pause;
- (void)play;
- (void)prepareToPlay;
- (void)setConfig:(id)arg1;
- (void)setupLivePlayerWithUrl:(id)arg1 options:(id)arg2;
- (void)setupLivePlayerWithUrl:(id)arg1;
- (void)dealloc;
- (id)initWithUrl:(id)arg1 options:(id)arg2;
- (id)initWithUrl:(id)arg1;
- (id)init;
@property(nonatomic) _Bool shouldShowHudView; // @synthesize shouldShowHudView=_shouldShowHudView;

@end
