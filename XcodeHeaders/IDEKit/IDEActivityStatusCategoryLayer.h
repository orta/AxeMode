/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "DVTClickableLayer.h"

@class CALayer, DVTTextLayer, NSAttributedString, NSImage, NSString;

@interface IDEActivityStatusCategoryLayer : DVTClickableLayer
{
    NSAttributedString *_cachedAttributedCountString;
    NSString *_statusTypeDisplayName;
    DVTTextLayer *_textLayer;
    CALayer *_imageLayer;
    long long _count;
}

- (void).cxx_destruct;
- (double)_textLayerVerticalOffset;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)attributedCountString;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain) NSImage *image;
- (id)init;
- (void)layoutSublayers;
@property(copy) NSString *statusTypeDisplayName; // @synthesize statusTypeDisplayName=_statusTypeDisplayName;
- (void)sizeToFit;
- (id)textAttributes;

@end

