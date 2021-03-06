//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASCellNode.h"

@class ASTextNode, NSDictionary, NSString;

@interface ASTextCellNode : ASCellNode
{
    NSString *_text;
    NSDictionary *_textAttributes;
    ASTextNode *_textNode;
    struct UIEdgeInsets _textInsets;
}

@property(retain, nonatomic) ASTextNode *textNode; // @synthesize textNode=_textNode;
@property(nonatomic) struct UIEdgeInsets textInsets; // @synthesize textInsets=_textInsets;
@property(copy, nonatomic) NSDictionary *textAttributes; // @synthesize textAttributes=_textAttributes;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)updateAttributedString;
- (struct UIEdgeInsets)defaultTextInsets;
- (id)defaultTextAttributes;
- (id)layoutSpecThatFits:(CDStruct_42a63532)arg1;
- (id)initWithAttributes:(id)arg1 insets:(struct UIEdgeInsets)arg2;
- (id)init;

@end

