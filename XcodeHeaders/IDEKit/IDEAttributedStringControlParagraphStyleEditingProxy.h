/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSNumber, NSTextView;

@interface IDEAttributedStringControlParagraphStyleEditingProxy : NSObject
{
    NSTextView *_textView;
    long long _location;
}

- (void).cxx_destruct;
@property(copy) NSNumber *alignment;
@property(copy) NSNumber *baseWritingDirection;
@property(copy) NSNumber *defaultTabInterval;
@property(copy) NSNumber *firstLineHeadIndent;
@property(copy) NSNumber *headIndent;
@property(copy) NSNumber *headerLevel;
@property(copy) NSNumber *hyphenationFactor;
- (id)initWithTextView:(id)arg1 andLocation:(long long)arg2;
@property(copy) NSNumber *lineBreakMode;
@property(copy) NSNumber *lineHeightMultiple;
@property(copy) NSNumber *lineSpacing;
@property(copy) NSNumber *maximumLineHeight;
@property(copy) NSNumber *minimumLineHeight;
@property(copy) NSNumber *paragraphSpacing;
@property(copy) NSNumber *paragraphSpacingBefore;
- (id)paragraphStyle;
@property(copy) NSNumber *tailIndent;
@property(copy) NSNumber *tighteningFactorForTruncation;
- (void)setValue:(id)arg1 forParagraphStyleKey:(id)arg2;
- (id)textStorage;

@end
