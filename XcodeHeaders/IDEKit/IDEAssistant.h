/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "DVTViewController.h"

@class IDEAssistantContext, IDEFilterControlBar, NSString, NSView;

@interface IDEAssistant : DVTViewController
{
    IDEAssistantContext *_assistantContext;
    NSString *_nextAssistantIdentifier;
    BOOL _expandsAssistantView;
    BOOL _widthResizable;
    NSString *_previousAssistantIdentifier;
}

+ (BOOL)wantsOverlayEffect;
- (void).cxx_destruct;
@property(readonly) BOOL alwaysShowFinish;
@property(retain) IDEAssistantContext *assistantContext; // @synthesize assistantContext=_assistantContext;
@property(readonly, copy) NSString *assistantTitle;
- (BOOL)canBecomeMainViewController;
@property(readonly) BOOL canCancel;
@property(readonly) BOOL canFinish;
@property(readonly) BOOL canGoBack;
@property(readonly) BOOL canGoForward;
@property(nonatomic) BOOL expandsAssistantView; // @synthesize expandsAssistantView=_expandsAssistantView;
@property(readonly) IDEFilterControlBar *filterControlBar;
- (id)finishButtonTitle;
- (void)finishWithCompletionBlock:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(retain) NSString *nextAssistantIdentifier; // @synthesize nextAssistantIdentifier=_nextAssistantIdentifier;
@property(retain) NSString *previousAssistantIdentifier; // @synthesize previousAssistantIdentifier=_previousAssistantIdentifier;
- (void)primitiveInvalidate;
@property(nonatomic) BOOL widthResizable; // @synthesize widthResizable=_widthResizable;
@property(readonly) NSView *sourceListView;
- (void)willGoNextOrFinish;
- (void)willResignCurrentAssistantInAssistantWindowController:(id)arg1;

@end
