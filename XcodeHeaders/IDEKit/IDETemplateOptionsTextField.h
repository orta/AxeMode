/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSTextField.h"

@class NSString;

@interface IDETemplateOptionsTextField : NSTextField
{
    NSString *_prefix;
    NSString *_suffix;
}

+ (Class)cellClass;
- (void).cxx_destruct;
@property(copy) NSString *prefix; // @synthesize prefix=_prefix;
@property(copy) NSString *suffix; // @synthesize suffix=_suffix;
- (void)validateSelectionStart:(long long *)arg1 length:(long long *)arg2 string:(id)arg3;

@end

