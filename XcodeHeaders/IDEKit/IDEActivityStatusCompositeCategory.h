/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEActivityStatusCategory.h>

@class NSArray, NSMapTable;

@interface IDEActivityStatusCompositeCategory : IDEActivityStatusCategory
{
    NSMapTable *_subcategoryToObservationTokenMap;
    NSArray *_subcategories;
    IDEActivityStatusCategory *_categoryWithHighestPrecidence;
}

- (void).cxx_destruct;
- (id)_findCategoryWithHighestPrecedence;
- (void)_setupSubcategoryObservations;
- (void)_subcategoryDidChangeCount:(id)arg1;
- (void)_teardownSubcategoryObservervations;
- (void)_updateConsolidatedAttributes;
@property(retain) IDEActivityStatusCategory *categoryWithHighestPrecidence; // @synthesize categoryWithHighestPrecidence=_categoryWithHighestPrecidence;
- (void)dealloc;
- (id)initWithCategories:(id)arg1 clickHandler:(id)arg2;
@property(readonly) NSArray *subcategories; // @synthesize subcategories=_subcategories;

@end

