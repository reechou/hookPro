//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChatStatusBaseDecorator.h"

@class CALayer, ChatStatusView;

@interface SnowStatusDecorator : ChatStatusBaseDecorator
{
    CALayer *_snowEmitter;
    ChatStatusView *_chatStatusView;
}

@property(nonatomic) __weak ChatStatusView *chatStatusView; // @synthesize chatStatusView=_chatStatusView;
@property(nonatomic) __weak CALayer *snowEmitter; // @synthesize snowEmitter=_snowEmitter;
- (void).cxx_destruct;
- (void)startStormAnimate;
- (void)delayRemoveEmitter;
- (void)wrapper:(id)arg1;
- (id)init;
- (void)dealloc;

@end

