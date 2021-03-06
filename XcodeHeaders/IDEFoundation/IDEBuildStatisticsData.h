/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDEBuildStatisticsData.h"

@class DVTSystemStatisticsMeasurement, NSString;

@interface IDEBuildStatisticsData : NSObject <IDEBuildStatisticsData>
{
    NSString *_commandString;
    NSString *_title;
    unsigned long long _ordinal;
    DVTSystemStatisticsMeasurement *_startSystemStats;
    DVTSystemStatisticsMeasurement *_endSystemStats;
    double _elapsedUserTime;
    double _elapsedSystemTime;
}

- (void).cxx_destruct;
@property(copy) NSString *commandString; // @synthesize commandString=_commandString;
- (id)defaultEmissionStringWithIndentLevel:(unsigned long long)arg1;
@property double elapsedSystemTime; // @synthesize elapsedSystemTime=_elapsedSystemTime;
@property double elapsedUserTime; // @synthesize elapsedUserTime=_elapsedUserTime;
@property(readonly) double elapsedWallClockTime;
- (void)emitContentsForAspect:(id)arg1 logLevel:(int)arg2 indentLevel:(unsigned long long)arg3 withBlock:(id)arg4;
@property(retain) DVTSystemStatisticsMeasurement *endSystemStats; // @synthesize endSystemStats=_endSystemStats;
@property(readonly) double endWallClockTime;
- (id)initWithTitle:(id)arg1 commandString:(id)arg2 ordinal:(unsigned long long)arg3 startSystemStatisticsMeasurement:(id)arg4 endSystemStatisticsMeasurement:(id)arg5 elapsedUserTime:(double)arg6 elapsedSystemTime:(double)arg7;
@property(readonly) long long numberOfVMPageins;
@property(readonly) long long numberOfVMPageouts;
@property unsigned long long ordinal; // @synthesize ordinal=_ordinal;
@property(retain) DVTSystemStatisticsMeasurement *startSystemStats; // @synthesize startSystemStats=_startSystemStats;
@property(copy) NSString *title; // @synthesize title=_title;
@property(readonly) double startWallClockTime;

@end

