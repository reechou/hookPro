//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JDCustomAnimation : NSObject
{
}

+ (void)gifAnimationWithView:(id)arg1 totalTime:(float)arg2 imagesArray:(id)arg3 timeArray:(id)arg4 forKey:(id)arg5;
+ (void)setViewProperty:(id)arg1 forKey:(id)arg2 value:(id)arg3;
+ (void)animateKeyframesWithView:(id)arg1 animateArray:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)animationFadeInOutView:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)animationView:(id)arg1 toView:(id)arg2 duration:(double)arg3 options:(long long)arg4 completion:(CDUnknownBlockType)arg5;

@end

