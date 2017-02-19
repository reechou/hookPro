//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GPUImageInput-Protocol.h"

@class GLProgram, NSString;
@protocol GPUImageTextureDelegate;

@interface GPUImageView : UIView <GPUImageInput>
{
    int inputRotation;	// 8 = 0x8
    id <GPUImageTextureDelegate> textureDelegate;	// 16 = 0x10
    unsigned int inputTextureForDisplay;	// 24 = 0x18
    unsigned int displayRenderbuffer;	// 28 = 0x1c
    unsigned int displayFramebuffer;	// 32 = 0x20
    GLProgram *displayProgram;	// 40 = 0x28
    int displayPositionAttribute;	// 48 = 0x30
    int displayTextureCoordinateAttribute;	// 52 = 0x34
    int displayInputTextureUniform;	// 56 = 0x38
    struct CGSize inputImageSize;	// 64 = 0x40
    float imageVertices[8];	// 80 = 0x50
    float backgroundColorRed;	// 112 = 0x70
    float backgroundColorGreen;	// 116 = 0x74
    float backgroundColorBlue;	// 120 = 0x78
    float backgroundColorAlpha;	// 124 = 0x7c
    _Bool enabled;	// 128 = 0x80
    int _fillMode;	// 132 = 0x84
    struct CGSize _sizeInPixels;	// 136 = 0x88
}

+ (const float *)textureCoordinatesForRotation:(int)arg1;
+ (Class)layerClass;
@property(nonatomic) _Bool enabled; // @synthesize enabled;
@property(nonatomic) int fillMode; // @synthesize fillMode=_fillMode;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize sizeInPixels; // @synthesize sizeInPixels=_sizeInPixels;
- (void)setCurrentlyReceivingMonochromeInput:(_Bool)arg1;
- (_Bool)wantsMonochromeInput;
- (void)conserveMemoryForNextFrame;
- (void)setTextureDelegate:(id)arg1 atIndex:(long long)arg2;
- (_Bool)shouldIgnoreUpdatesToThisTarget;
- (void)endProcessing;
- (struct CGSize)maximumOutputSize;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (void)setInputRotation:(int)arg1 atIndex:(long long)arg2;
- (void)setInputTexture:(unsigned int)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)setBackgroundColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)recalculateViewGeometry;
- (void)presentFramebuffer;
- (void)setDisplayFramebuffer;
- (void)destroyDisplayFramebuffer;
- (void)createDisplayFramebuffer;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
