//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;
@protocol AliDetailSkuPropsValuesModel;

@interface TBMirrorSkuPropsModel : NSObject
{
    NSString *_propId;	// 8 = 0x8
    NSMutableArray<AliDetailSkuPropsValuesModel> *_values;	// 16 = 0x10
    NSString *_propName;	// 24 = 0x18
}

@property(copy, nonatomic) NSString *propName; // @synthesize propName=_propName;
@property(retain, nonatomic) NSMutableArray<AliDetailSkuPropsValuesModel> *values; // @synthesize values=_values;
@property(copy, nonatomic) NSString *propId; // @synthesize propId=_propId;
- (void).cxx_destruct;

@end

