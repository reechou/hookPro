//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MQPZip : NSObject
{
}

+ (id)ungzipData:(id)arg1;
+ (id)unzipWithData:(id)arg1 allowGizp:(id)arg2;
+ (id)ungzipDictionaryByType:(id)arg1 withData:(id)arg2 md5:(id)arg3;
+ (id)ungzipStringByType:(id)arg1 withData:(id)arg2 md5:(id)arg3;
+ (id)unzipWithNode:(id)arg1 gzip:(id)arg2 md5:(id)arg3 convertDic:(_Bool)arg4;
+ (id)unzip:(id)arg1;

@end
