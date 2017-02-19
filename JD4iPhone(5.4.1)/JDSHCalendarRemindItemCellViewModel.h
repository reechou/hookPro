//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSString;

@interface JDSHCalendarRemindItemCellViewModel : NSObject
{
    NSDate *_date;
    NSString *_timeString;
    NSString *_remindItem;
    NSString *_remindString;
    NSString *_summaryString;
    NSString *_content;
    NSString *_jumpURL;
    NSString *_dataId;
    NSArray *_remindListArray;
    long long _numOfLine;
    long long _itemType;
    long long _contentType;
}

@property(nonatomic) long long contentType; // @synthesize contentType=_contentType;
@property(nonatomic) long long itemType; // @synthesize itemType=_itemType;
@property(nonatomic) long long numOfLine; // @synthesize numOfLine=_numOfLine;
@property(copy, nonatomic) NSArray *remindListArray; // @synthesize remindListArray=_remindListArray;
@property(copy, nonatomic) NSString *dataId; // @synthesize dataId=_dataId;
@property(copy, nonatomic) NSString *jumpURL; // @synthesize jumpURL=_jumpURL;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *summaryString; // @synthesize summaryString=_summaryString;
@property(copy, nonatomic) NSString *remindString; // @synthesize remindString=_remindString;
@property(copy, nonatomic) NSString *remindItem; // @synthesize remindItem=_remindItem;
@property(copy, nonatomic) NSString *timeString; // @synthesize timeString=_timeString;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (void)handleRemindList;
- (void)keyValuesDidFinishConvertingToObject;
- (id)init;

@end
