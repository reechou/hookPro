//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RangerTag.h"

@class NSDictionary, RangerTextTagAttributeTool;

@interface RangerTextTag : RangerTag
{
    NSDictionary *_attributes;	// 8 = 0x8
    double _maxHeight;	// 16 = 0x10
    double _maxWidth;	// 24 = 0x18
    int _lines;	// 32 = 0x20
    RangerTextTagAttributeTool *_attributesTool;	// 40 = 0x28
}

- (void).cxx_destruct;
- (void)configTagAfterLayout:(id)arg1 view:(id)arg2;
- (void)configTagBeforeLayout:(id)arg1 view:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)configWithRangerAtributes:(id)arg1 view:(id)arg2;
- (id)viewForRangerTag;
- (_Bool)isTagDisplayContent;

@end
