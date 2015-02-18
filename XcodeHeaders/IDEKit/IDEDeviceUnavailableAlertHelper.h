/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class IDERunContextManager, NSAlert, NSError, NSString, NSWindow;

@interface IDEDeviceUnavailableAlertHelper : NSObject
{
    NSError *_unavailabilityError;
    NSString *_deviceIdentifier;
    NSString *_deviceName;
    NSWindow *_window;
    id _availabilityHandler;
    NSAlert *_alert;
    IDERunContextManager *_runContextManager;
}

- (void).cxx_destruct;
- (id)_genericUnavailabilityError;
@property(retain) NSAlert *alert; // @synthesize alert=_alert;
@property(copy) id availabilityHandler; // @synthesize availabilityHandler=_availabilityHandler;
@property(retain) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(retain) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (id)initWithDevice:(id)arg1 runContextManager:(id)arg2 window:(id)arg3 availabilityHandler:(id)arg4;
@property(retain) IDERunContextManager *runContextManager; // @synthesize runContextManager=_runContextManager;
@property(retain, nonatomic) NSError *unavailabilityError; // @synthesize unavailabilityError=_unavailabilityError;
@property(retain) NSWindow *window; // @synthesize window=_window;
- (void)showAlert;

@end
