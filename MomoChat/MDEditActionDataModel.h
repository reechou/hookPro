//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface MDEditActionDataModel : NSObject
{
    NSString *_title;
    NSString *_destructiveButtonTitle;
    NSArray *_otherTitles;
    long long _actionTag;
}

@property(nonatomic) long long actionTag; // @synthesize actionTag=_actionTag;
@property(retain, nonatomic) NSArray *otherTitles; // @synthesize otherTitles=_otherTitles;
@property(retain, nonatomic) NSString *destructiveButtonTitle; // @synthesize destructiveButtonTitle=_destructiveButtonTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

