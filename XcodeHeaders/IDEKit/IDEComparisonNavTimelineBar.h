/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

@class IDEComparisonEditor, IDEComparisonEditorChangesStepperView, IDEComparisonEditorTimelineNavBar, IDEComparisonNavTimelineView, IDEPathControl, NSWindow;

@interface IDEComparisonNavTimelineBar : IDEViewController
{
    IDEComparisonEditorTimelineNavBar *_navTimelineBarContainerView;
    NSWindow *_attachedWindow;
    id _notificationToken;
    IDEComparisonNavTimelineView *_timelineView;
    IDEComparisonEditor *_comparisonEditor;
}

- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
@property(retain) NSWindow *attachedWindow;
@property(readonly) IDEComparisonEditorChangesStepperView *changesStepperControl;
@property(retain) IDEComparisonEditor *comparisonEditor; // @synthesize comparisonEditor=_comparisonEditor;
@property BOOL hideChangesStepperControl;
@property BOOL hideSecondaryPathControl;
- (void)hideTimeline;
@property BOOL hideTimelineButton;
- (id)initWithComparisonEditor:(id)arg1;
- (void)layoutAttachedWindow;
- (void)layoutContainerView;
- (void)loadView;
@property(retain) IDEComparisonEditorTimelineNavBar *navTimelineBarContainerView; // @synthesize navTimelineBarContainerView=_navTimelineBarContainerView;
@property(retain) id notificationToken; // @synthesize notificationToken=_notificationToken;
@property(readonly) IDEPathControl *primaryPathControl;
- (void)primitiveInvalidate;
@property(readonly) IDEPathControl *secondaryPathControl;
@property BOOL showAsInset;
@property(retain) IDEComparisonNavTimelineView *timelineView; // @synthesize timelineView=_timelineView;
- (void)showTimeline;
- (void)toggleTimelineVisibility:(id)arg1;
- (void)viewWillUninstall;

@end
