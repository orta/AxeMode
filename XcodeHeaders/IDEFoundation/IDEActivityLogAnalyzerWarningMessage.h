/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEFoundation/IDEActivityLogMessage.h>

@interface IDEActivityLogAnalyzerWarningMessage : IDEActivityLogMessage
{
}

+ (id)analyzerWarningType;
- (id)dvt_initFromDeserializer:(id)arg1;
- (void)dvt_writeToSerializer:(id)arg1;
- (BOOL)isAnalyzerWarningMessage;
- (unsigned long long)totalNumberOfAnalyzerWarnings;
- (unsigned long long)totalNumberOfWarnings;

@end
