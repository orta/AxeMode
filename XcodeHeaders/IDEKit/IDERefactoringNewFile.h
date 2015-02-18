/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDEKeyDrivenNavigableItemRepresentedObject.h"

@class DVTDocumentLocation, DVTFileDataType, DVTFilePath, IDEFileReference, NSImage, NSString;

@interface IDERefactoringNewFile : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    id <IDERefactoringResult> _result;
    NSImage *_image;
    DVTFileDataType *_documentType;
    DVTDocumentLocation *_contentDocumentLocation;
    DVTFilePath *_filePath;
    NSString *_name;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (id)initWithRefactoringResult:(id)arg1;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation; // @synthesize navigableItem_contentDocumentLocation=_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType; // @synthesize navigableItem_documentType=_documentType;
@property(readonly) NSImage *navigableItem_image; // @synthesize navigableItem_image=_image;
@property(readonly) NSString *navigableItem_name; // @synthesize navigableItem_name=_name;
@property(readonly) id <IDERefactoringResult> result; // @synthesize result=_result;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end
