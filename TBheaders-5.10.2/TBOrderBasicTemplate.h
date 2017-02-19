//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOrderObject.h"

@class NSArray, NSDictionary, NSString;

@interface TBOrderBasicTemplate : TBOrderObject
{
    _Bool _modified;	// 8 = 0x8
    NSString *_version;	// 16 = 0x10
    NSArray *_templates;	// 24 = 0x18
    NSDictionary *_eventTemplates;	// 32 = 0x20
}

@property(retain, nonatomic) NSDictionary *eventTemplates; // @synthesize eventTemplates=_eventTemplates;
@property(retain, nonatomic) NSArray *templates; // @synthesize templates=_templates;
@property(nonatomic) _Bool modified; // @synthesize modified=_modified;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)eventComponentWithEventId:(id)arg1;
- (id)unitComponentWithCode:(id)arg1;
- (id)eventWithData:(id)arg1;
- (id)modelArrayWithJson:(id)arg1;
- (id)initWithData:(id)arg1;

@end
