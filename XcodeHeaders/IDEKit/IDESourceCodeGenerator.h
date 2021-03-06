/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTSourceCodeLanguage, IDEWorkspaceDocument;

@interface IDESourceCodeGenerator : NSObject
{
    IDEWorkspaceDocument *_workspaceDocument;
}

+ (id)alloc;
- (void).cxx_destruct;
- (id)classSymbolForClassNamed:(id)arg1 error:(id *)arg2;
- (id)commitInsertionOfSourceCodeForCompositeResult:(id)arg1 error:(id *)arg2;
- (id)editorDocumentComponentsForCounterparts:(id)arg1 documentLocationForCounterpartBlock:(id)arg2 error:(void)arg3;
- (id)effectiveInsertionOptionsFromBaseOptions:(id)arg1 forCounterpart:(id)arg2 lineHintingCounterpart:(id)arg3 insertBeforeHint:(id)arg4 insertAfterHint:(id)arg5;
@property(readonly) DVTSourceCodeLanguage *generatedLanguage;
- (id)initWithWorkspaceDocument:(id)arg1;
- (id)prepareToAddSourceCodeForCounterparts:(id)arg1 documentLocationForCounterpartBlock:(id)arg2 addSourceCodeForCounterpartBlock:(void)arg3 options:(id)arg4 error:(void)arg5;
- (void)releaseEditorDocumentsFromEditorDocumentComponents:(id)arg1;
@property(readonly) IDEWorkspaceDocument *workspaceDocument; // @synthesize workspaceDocument=_workspaceDocument;

@end

