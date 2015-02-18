/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

@class DVTBorderedView, DVTReplacementView, DVTTabChooserView;

@interface IDELocationCategoryPrefsPaneController : IDEViewController
{
    DVTReplacementView *replacementView;
    DVTBorderedView *_borderedView;
    DVTTabChooserView *_tabChooserView;
}

+ (id)cachedExtensions;
+ (id)cachedExtensionsByIdentifier;
- (void).cxx_destruct;
- (void)_handleTabChanged;
- (void)_initTabChooserView;
@property __weak DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
- (void)loadView;
- (void)primitiveInvalidate;
@property(retain) DVTReplacementView *replacementView; // @synthesize replacementView;
@property __weak DVTTabChooserView *tabChooserView; // @synthesize tabChooserView=_tabChooserView;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;

@end
