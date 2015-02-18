/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

@class DVTBorderedView, DVTDeveloperRecord, DVTObservingToken, IDERollOverTableView, NSArrayController, NSError, NSImageView, NSPredicate, NSSet;

@interface IDEAccountPrefsDeveloperAccountDetailViewController : IDEViewController
{
    DVTObservingToken *_teamsToken;
    DVTObservingToken *_macTeamsToken;
    DVTObservingToken *_iosTeamsToken;
    _Bool _loadingTeams;
    NSSet *_teams;
    DVTDeveloperRecord *_developer;
    NSError *_teamLoadingError;
    NSArrayController *_teamsArrayController;
    IDERollOverTableView *_teamsTable;
    NSPredicate *_fetchPredicate;
    NSImageView *_imageView;
    DVTBorderedView *_borderedView;
}

+ (id)keyPathsForValuesAffectingDeveloperAccount;
+ (id)keyPathsForValuesAffectingPassword;
+ (id)keyPathsForValuesAffectingUserDescription;
- (void).cxx_destruct;
@property(retain) DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
- (id)contextMenu;
@property(retain) DVTDeveloperRecord *developer; // @synthesize developer=_developer;
- (id)developerAccount;
@property(readonly) NSPredicate *fetchPredicate; // @synthesize fetchPredicate=_fetchPredicate;
@property(retain) NSImageView *imageView; // @synthesize imageView=_imageView;
@property _Bool loadingTeams; // @synthesize loadingTeams=_loadingTeams;
- (id)moc;
- (id)password;
- (void)primitiveInvalidate;
- (void)setPassword:(id)arg1;
- (void)setRepresentedObject:(id)arg1;
@property(retain) NSError *teamLoadingError; // @synthesize teamLoadingError=_teamLoadingError;
@property(copy) NSSet *teams; // @synthesize teams=_teams;
@property(retain) NSArrayController *teamsArrayController; // @synthesize teamsArrayController=_teamsArrayController;
@property(retain) IDERollOverTableView *teamsTable; // @synthesize teamsTable=_teamsTable;
- (void)setUserDescription:(id)arg1;
- (void)tableViewDoubleClicked:(id)arg1;
- (void)updateEmptyContentString;
- (id)userDescription;
- (void)viewDetails:(id)arg1;
- (void)viewDetailsForTeam:(id)arg1;
- (void)viewDidInstall;

@end
