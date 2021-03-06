//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCache, NSString;
@protocol OS_dispatch_queue, TBIUCache;

@interface TBIUCache : NSObject
{
    long long _maxCacheAge;	// 8 = 0x8
    NSCache *_memCache;	// 16 = 0x10
    NSString *_diskCachePath;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_ioQueue;	// 32 = 0x20
    id <TBIUCache> _delegate;	// 40 = 0x28
}

+ (id)instance;
@property(nonatomic) __weak id <TBIUCache> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue; // @synthesize ioQueue=_ioQueue;
@property(retain, nonatomic) NSString *diskCachePath; // @synthesize diskCachePath=_diskCachePath;
@property(retain, nonatomic) NSCache *memCache; // @synthesize memCache=_memCache;
@property(nonatomic) long long maxCacheAge; // @synthesize maxCacheAge=_maxCacheAge;
- (void).cxx_destruct;
- (void)removeImageForKey:(id)arg1 fromDisk:(_Bool)arg2;
- (void)removeImageForKey:(id)arg1;
- (void)dataFromCacheForKey:(id)arg1 done:(CDUnknownBlockType)arg2;
- (id)dataFromMemoryCacheForKey:(id)arg1;
- (void)storeData:(id)arg1 forKey:(id)arg2 toDisk:(_Bool)arg3;
- (void)storeData:(id)arg1 forKey:(id)arg2;
- (id)cachePathForKey:(id)arg1;
- (int)getDiskCount;
- (unsigned long long)getSize;
- (void)cleanDisk;
- (void)clearDisk;
- (void)clearMemory;
- (id)initWithNamespace:(id)arg1 AndIoQueue:(id)arg2;
- (id)init;

@end

