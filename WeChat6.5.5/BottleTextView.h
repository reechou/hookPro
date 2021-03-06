//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class MMTextView, NSString;

__attribute__((visibility("hidden")))
@interface BottleTextView : UIView <UITextViewDelegate>
{
    MMTextView *_textView;
    UIView *shiftView;
}

@property(retain, nonatomic) UIView *shiftView; // @synthesize shiftView;
- (void).cxx_destruct;
- (void)clearText;
- (void)setText:(id)arg1;
- (id)text;
- (void)endEdit;
- (void)beginEdit;
- (void)moveToPoint:(struct CGPoint)arg1;
- (void)readyWriteWithHeight:(unsigned int)arg1;
- (void)readReadWithHeight:(unsigned int)arg1;
- (void)dealloc;
- (id)init;
- (void)showNormalTextView;
- (void)showEditTextViewWithKeyBoardHeight:(unsigned int)arg1;
- (void)initWriteView;
- (void)initViewWithEditEnabled:(_Bool)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

