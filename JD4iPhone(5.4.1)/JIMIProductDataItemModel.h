//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JIMIBaseModel.h"

@class NSString;

@interface JIMIProductDataItemModel : JIMIBaseModel
{
    NSString *_wid;
    NSString *_wname;
    NSString *_imageurl;
    NSString *_wmeprice;
    NSString *_url;
}

@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *wmeprice; // @synthesize wmeprice=_wmeprice;
@property(copy, nonatomic) NSString *imageurl; // @synthesize imageurl=_imageurl;
@property(copy, nonatomic) NSString *wname; // @synthesize wname=_wname;
@property(copy, nonatomic) NSString *wid; // @synthesize wid=_wid;
- (void).cxx_destruct;
- (_Bool)setDic:(id)arg1;

@end
