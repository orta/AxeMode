/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTFilePath, DVTSourceCodeSymbolKind, IDEIndexCollection, NSString;

@protocol IDEAutoImportable <NSObject>
@property(readonly, nonatomic) NSString *completionString;
@property(readonly, nonatomic) IDEIndexCollection *definitions;
@property(readonly, nonatomic) DVTFilePath *filePathToHeaderToImport;
@property(readonly, nonatomic, getter=isAutoImportable) BOOL autoImportable;
@property(readonly, nonatomic, getter=isInProject) BOOL inProject;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) DVTSourceCodeSymbolKind *symbolKind;
@end

