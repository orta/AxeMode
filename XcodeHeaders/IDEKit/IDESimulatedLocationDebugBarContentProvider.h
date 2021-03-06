/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEDebugBarContentProvider.h>

@class DVTGradientImagePopUpButton, DVTObservingToken, IDESimulateLocationMenuController;

@interface IDESimulatedLocationDebugBarContentProvider : IDEDebugBarContentProvider
{
    DVTObservingToken *_locationSimulatorStateToken;
    DVTObservingToken *_locationSimulatorToken;
    DVTGradientImagePopUpButton *_locationButton;
    IDESimulateLocationMenuController *_simulateLocationMenuController;
}

+ (id)assetBundle;
+ (id)iconAlternateImage_locationSimulation;
+ (id)iconImage_locationSimulation;
- (void).cxx_destruct;
- (void)_cancelLocationSimulatorObservation;
- (void)_cancelLocationStateObservation;
- (id)_imageForState:(BOOL)arg1;
- (void)currentDebugSessionStateDidChange;
- (void)currentLaunchSessionLocationSimulatorChanged;
- (id)init;
- (void)wasAttachedToDebugBar:(id)arg1;
- (void)willBeDetachedFromDebugBar:(id)arg1;

@end

