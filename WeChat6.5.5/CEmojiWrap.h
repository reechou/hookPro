//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CEmojiWrap : NSObject
{
    NSString *m_nsEmoji;
    NSString *m_nsDesc;
    unsigned int m_uiCataLogLocalID;
    _Bool m_bCanDelete;
}

@property(nonatomic) _Bool m_bCanDelete; // @synthesize m_bCanDelete;
@property(nonatomic) unsigned int m_uiCataLogLocalID; // @synthesize m_uiCataLogLocalID;
@property(retain, nonatomic) NSString *m_nsDesc; // @synthesize m_nsDesc;
@property(retain, nonatomic) NSString *m_nsEmoji; // @synthesize m_nsEmoji;
- (void).cxx_destruct;
- (void)ChangeForDisplay;
- (id)init;

@end

