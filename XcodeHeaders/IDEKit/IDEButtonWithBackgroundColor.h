/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSButton.h"

#import "DVTWindowActivationStateObserver.h"

@class NSColor, NSString;

@interface IDEButtonWithBackgroundColor : NSButton <DVTWindowActivationStateObserver>
{
    id <DVTCancellable> _windowActivationObservation;
    NSColor *_backgroundColor;
    NSColor *_inactiveBackgroundColor;
}

- (void).cxx_destruct;
@property(retain) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
@property(retain) NSColor *inactiveBackgroundColor; // @synthesize inactiveBackgroundColor=_inactiveBackgroundColor;
- (BOOL)isOpaque;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)window:(id)arg1 didChangeActivationState:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
