/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface IDEDebuggerExpression : NSObject
{
    NSString *_expressionString;
    NSString *_result;
}

- (void).cxx_destruct;
@property(copy) NSString *expressionString; // @synthesize expressionString=_expressionString;
- (BOOL)hasBeenEvaluated;
- (id)initWithExpressionString:(id)arg1;
- (void)resetResult;
@property(copy) NSString *result; // @synthesize result=_result;

@end
