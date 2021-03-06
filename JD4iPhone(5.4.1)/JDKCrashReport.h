//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JDKCrashReport : NSObject
{
}

+ (id)crashedThreadWithReport:(id)arg1;
+ (id)selectorForRegisterWithName:(id)arg1 ofThread:(id)arg2 report:(id)arg3;
+ (id)registersWithThread:(id)arg1 report:(id)arg2 lp64:(_Bool)arg3;
+ (id)threads:(id)arg1 lp64:(_Bool)arg2;
+ (id)stackFrame:(id)arg1 report:(id)arg2 lp64:(_Bool)arg3;
+ (id)exceptionBacktrace:(id)arg1 lp64:(_Bool)arg2;
+ (id)exceptionReason:(id)arg1 crashedThread:(id)arg2 lp64:(_Bool)arg3;
+ (id)exceptionName:(id)arg1;
+ (id)exceptionType:(id)arg1;
+ (id)exceptionCodes:(id)arg1 topImage:(id)arg2 lp64:(_Bool)arg3;
+ (id)arch:(id)arg1;
+ (id)process:(id)arg1 imageInfo:(id)arg2;
+ (id)dsymUUID:(id)arg1;
+ (id)topImage:(id)arg1;
+ (_Bool)is64Bit:(id)arg1;
+ (id)crashModel:(id)arg1;

@end

