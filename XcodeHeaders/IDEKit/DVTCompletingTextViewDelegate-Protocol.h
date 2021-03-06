/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSTextViewDelegate.h"

@protocol DVTCompletingTextViewDelegate <NSTextViewDelegate>

@optional
- (id)completingTextView:(id)arg1 documentLocationForWordStartLocation:(unsigned long long)arg2;
- (void)completingTextView:(id)arg1 willPassContextToStrategies:(id)arg2 atWordStartLocation:(unsigned long long)arg3;
- (BOOL)completingTextViewHandleCancel:(id)arg1;
- (void)setupTextViewContextMenuWithMenu:(id)arg1;
- (void)textView:(id)arg1 layoutManager:(id)arg2 didLayoutGlyphsUpToCharacterIndex:(unsigned long long)arg3;
- (unsigned long long)textView:(id)arg1 lineEndingForReadingSelectionFromPasteboard:(id)arg2 type:(id)arg3;
- (unsigned long long)textView:(id)arg1 lineEndingForWritingSelectionToPasteboard:(id)arg2 type:(id)arg3;
@end

