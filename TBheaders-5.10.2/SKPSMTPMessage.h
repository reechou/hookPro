//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSStreamDelegate-Protocol.h"

@class NSArray, NSInputStream, NSMutableString, NSOutputStream, NSString, NSTimer;
@protocol SKPSMTPMessageDelegate;

@interface SKPSMTPMessage : NSObject <NSCopying, NSStreamDelegate>
{
    NSString *login;	// 8 = 0x8
    NSString *pass;	// 16 = 0x10
    NSString *relayHost;	// 24 = 0x18
    NSArray *relayPorts;	// 32 = 0x20
    NSString *subject;	// 40 = 0x28
    NSString *fromEmail;	// 48 = 0x30
    NSString *toEmail;	// 56 = 0x38
    NSString *ccEmail;	// 64 = 0x40
    NSString *bccEmail;	// 72 = 0x48
    NSArray *parts;	// 80 = 0x50
    NSOutputStream *outputStream;	// 88 = 0x58
    NSInputStream *inputStream;	// 96 = 0x60
    _Bool requiresAuth;	// 104 = 0x68
    _Bool wantsSecure;	// 105 = 0x69
    _Bool validateSSLChain;	// 106 = 0x6a
    unsigned long long sendState;	// 112 = 0x70
    _Bool isSecure;	// 120 = 0x78
    NSMutableString *inputString;	// 128 = 0x80
    _Bool serverAuthCRAMMD5;	// 136 = 0x88
    _Bool serverAuthPLAIN;	// 137 = 0x89
    _Bool serverAuthLOGIN;	// 138 = 0x8a
    _Bool serverAuthDIGESTMD5;	// 139 = 0x8b
    _Bool server8bitMessages;	// 140 = 0x8c
    id <SKPSMTPMessageDelegate> delegate;	// 144 = 0x90
    double connectTimeout;	// 152 = 0x98
    NSTimer *connectTimer;	// 160 = 0xa0
    NSTimer *watchdogTimer;	// 168 = 0xa8
}

@property(retain, nonatomic) NSString *bccEmail; // @synthesize bccEmail;
@property(retain, nonatomic) NSString *ccEmail; // @synthesize ccEmail;
@property(nonatomic) _Bool validateSSLChain; // @synthesize validateSSLChain;
@property(retain) NSTimer *watchdogTimer; // @synthesize watchdogTimer;
@property(nonatomic) double connectTimeout; // @synthesize connectTimeout;
@property(retain) NSTimer *connectTimer; // @synthesize connectTimer;
@property(nonatomic) id <SKPSMTPMessageDelegate> delegate; // @synthesize delegate;
@property(nonatomic) _Bool wantsSecure; // @synthesize wantsSecure;
@property(retain, nonatomic) NSMutableString *inputString; // @synthesize inputString;
@property(nonatomic) _Bool requiresAuth; // @synthesize requiresAuth;
@property(retain, nonatomic) NSArray *parts; // @synthesize parts;
@property(retain, nonatomic) NSString *toEmail; // @synthesize toEmail;
@property(retain, nonatomic) NSString *fromEmail; // @synthesize fromEmail;
@property(retain, nonatomic) NSString *subject; // @synthesize subject;
@property(retain, nonatomic) NSArray *relayPorts; // @synthesize relayPorts;
@property(retain, nonatomic) NSString *relayHost; // @synthesize relayHost;
@property(retain, nonatomic) NSString *pass; // @synthesize pass;
@property(retain, nonatomic) NSString *login; // @synthesize login;
- (void)cleanUpStreams;
- (void)connectionConnectedCheck:(id)arg1;
- (_Bool)sendParts;
- (void)parseBuffer;
- (id)formatAddresses:(id)arg1;
- (id)formatAnAddress:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (_Bool)send;
- (_Bool)preflightCheckWithError:(id *)arg1;
- (void)connectionWatchdog:(id)arg1;
- (void)stopWatchdog;
- (void)startLongWatchdog;
- (void)startShortWatchdog;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
