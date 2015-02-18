/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

#import "IDECapsuleViewController.h"

@class NSImage, NSString;

@interface IDETargetEditorSectionViewController : IDEViewController <IDECapsuleViewController>
{
    id _targetViewController;
}

- (void).cxx_destruct;
@property(readonly) BOOL canDrag;
@property(readonly) BOOL canSelect;
- (id)capsuleViewBackgroundColor:(id)arg1;
@property(readonly) BOOL disclosedByDefault;
- (void)loadView;
@property(retain) id targetViewController; // @synthesize targetViewController=_targetViewController;
@property(readonly, copy) NSString *titleForDisplay;

// Remaining properties
@property BOOL canAddItems;
@property(readonly) BOOL canRemove;
@property BOOL canRemoveItems;
@property(readonly) BOOL canRename;
@property(readonly) BOOL canUndisclose;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *footerLabel;
@property(readonly) unsigned long long hash;
@property(readonly) NSImage *icon;
@property(readonly) Class superclass;

@end
