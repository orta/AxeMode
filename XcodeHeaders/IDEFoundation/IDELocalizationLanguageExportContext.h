/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEFoundation/IDELocalizationWorkContext.h>

@class IDEContainer<IDELocalizedContainer>, IDELocalizedResourcePopulationContext, NSString, NSURL, NSXMLDocument;

@interface IDELocalizationLanguageExportContext : IDELocalizationWorkContext
{
    IDELocalizedResourcePopulationContext *_populationContext;
    NSURL *_destinationUrl;
    IDEContainer<IDELocalizedContainer> *_container;
    NSString *_sourceLanguage;
    NSString *_targetLanguage;
    NSXMLDocument *_exportXLIFF;
}

- (void).cxx_destruct;
@property(retain) IDEContainer<IDELocalizedContainer> *container; // @synthesize container=_container;
@property(retain) NSURL *destinationUrl; // @synthesize destinationUrl=_destinationUrl;
@property(retain) NSXMLDocument *exportXLIFF; // @synthesize exportXLIFF=_exportXLIFF;
@property(retain) IDELocalizedResourcePopulationContext *populationContext; // @synthesize populationContext=_populationContext;
- (void)primitiveInvalidate;
@property(retain) NSString *sourceLanguage; // @synthesize sourceLanguage=_sourceLanguage;
@property(retain) NSString *targetLanguage; // @synthesize targetLanguage=_targetLanguage;

@end

