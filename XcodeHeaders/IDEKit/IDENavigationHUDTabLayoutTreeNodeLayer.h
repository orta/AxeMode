/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDENavigationHUDTabLayoutLayer.h>

@class IDEWorkspaceTabControllerLayoutTreeNode;

@interface IDENavigationHUDTabLayoutTreeNodeLayer : IDENavigationHUDTabLayoutLayer
{
    IDEWorkspaceTabControllerLayoutTreeNode *_representedLayoutTreeNode;
}

- (void).cxx_destruct;
- (id)initWithRepresentedLayoutTreeNode:(id)arg1 inWorkspaceTabLayer:(id)arg2 inWorkspaceWindowController:(id)arg3;
- (id)representativeSelection;
@property(readonly) IDEWorkspaceTabControllerLayoutTreeNode *representedLayoutTreeNode; // @synthesize representedLayoutTreeNode=_representedLayoutTreeNode;

@end

