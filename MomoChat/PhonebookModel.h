//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PhonebookModel : NSObject
{
    _Bool _invited;
    int _relation;
    NSString *_number;
    NSString *_secretNumber;
    NSString *_name;
    NSString *_momoid;
    unsigned long long _flag;
}

@property(nonatomic) unsigned long long flag; // @synthesize flag=_flag;
@property(retain, nonatomic) NSString *momoid; // @synthesize momoid=_momoid;
@property(nonatomic) _Bool invited; // @synthesize invited=_invited;
@property(nonatomic) int relation; // @synthesize relation=_relation;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *secretNumber; // @synthesize secretNumber=_secretNumber;
@property(retain, nonatomic) NSString *number; // @synthesize number=_number;
- (void)SetSecretNumber:(id)arg1;
- (void)SetMomoid:(id)arg1;
- (void)SetInvited:(_Bool)arg1;
- (void)SetRelation:(id)arg1;
- (void)SetName:(id)arg1;
- (void)SetNumber:(id)arg1;
- (id)init;
- (void)dealloc;

@end

