/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEFoundation/IDEIndexCollection.h>

@class DVTSourceCodeSymbolKind;

@interface IDEIndexAutoImportItemCollection : IDEIndexCollection
{
    DVTSourceCodeSymbolKind *_symbolKind;
}

- (void).cxx_destruct;
- (id)instantiateRow:(struct sqlite3_stmt *)arg1;
@property(retain, nonatomic) DVTSourceCodeSymbolKind *symbolKind; // @synthesize symbolKind=_symbolKind;
- (id)tempTableSchema;

@end

