//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC13Taobao4iPhone20TBAddrGroupOperation.h"

@class NSString, _TtC13Taobao4iPhone24TBAddrCreateNetOperation, _TtC13Taobao4iPhone29TBAddrInferStreetNetOperation, _TtC13Taobao4iPhone30TBAddrUpdateAsDefaultOperation;

@interface _TtC13Taobao4iPhone21TBAddrCreateOperation : _TtC13Taobao4iPhone20TBAddrGroupOperation
{
    // Error parsing type: , name: context
    // Error parsing type: , name: inferStreetOperation
    // Error parsing type: , name: createNetOperation
    // Error parsing type: , name: updateAsDefaultOperation
    // Error parsing type: , name: deliverId
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithOperations:(id)arg1;
- (void)finished:(id)arg1;
@property(nonatomic, copy) NSString *deliverId; // @synthesize deliverId;
@property(nonatomic, retain) _TtC13Taobao4iPhone30TBAddrUpdateAsDefaultOperation *updateAsDefaultOperation; // @synthesize updateAsDefaultOperation;
@property(nonatomic, readonly) _TtC13Taobao4iPhone24TBAddrCreateNetOperation *createNetOperation; // @synthesize createNetOperation;
@property(nonatomic, retain) _TtC13Taobao4iPhone29TBAddrInferStreetNetOperation *inferStreetOperation; // @synthesize inferStreetOperation;

@end
