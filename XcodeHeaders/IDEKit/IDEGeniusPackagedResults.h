/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

@interface IDEGeniusPackagedResults : NSObject
{
    NSArray *_geniusResults;
    NSString *_geniusCategory;
}

- (void).cxx_destruct;
- (id)description;
@property(readonly) NSString *geniusCategory; // @synthesize geniusCategory=_geniusCategory;
@property(readonly) NSArray *geniusResults; // @synthesize geniusResults=_geniusResults;
- (unsigned long long)hash;
- (id)init;
- (id)initWithGeniusResults:(id)arg1 geniusCategory:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

