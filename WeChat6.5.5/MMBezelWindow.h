//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIWindow.h"

@class NSObject;
@protocol MMBezelWindowDelegate;

__attribute__((visibility("hidden")))
@interface MMBezelWindow : MMUIWindow
{
    NSObject<MMBezelWindowDelegate> *_bezelWindowDelegate;
}

@property(nonatomic) __weak NSObject<MMBezelWindowDelegate> *bezelWindowDelegate; // @synthesize bezelWindowDelegate=_bezelWindowDelegate;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
