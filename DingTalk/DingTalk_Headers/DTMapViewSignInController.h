//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "AMapSearchDelegate-Protocol.h"
#import "DTMapViewControllerProtocol-Protocol.h"
#import "MAMapViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AMapPOI, CLLocation, DTMapViewNoSearchResultHolderUIView, DTSearchBar, DTTableView, MAMapView, NSError, NSMutableArray, NSString, UIButton, UISearchDisplayController;
@protocol DTLocationSearchServiceProtocol, DTMapViewControllerDelegate;

@interface DTMapViewSignInController : DTViewController <MAMapViewDelegate, AMapSearchDelegate, UISearchDisplayDelegate, UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate, DTMapViewControllerProtocol>
{
    MAMapView *_mapView;
    long long _userLocationStatus;
    CLLocation *_lastUserCLLocation;
    NSString *_locationAddress;
    NSString *_cityCode;
    AMapPOI *_selectedPOI;
    AMapPOI *_selectedKeywordPOI;
    NSMutableArray *_nearByPOIs;
    long long _nearByPOIRequestPage;
    _Bool _nearByHasMorePOIs;
    UISearchDisplayController *_SDController;
    NSMutableArray *_keywordPOIs;
    long long _keywordPOIRequestPage;
    _Bool _keywordHasMorePOIs;
    NSString *_nearbyPOIKeyword;
    _Bool _updateLocationDenied;
    NSError *_updateLocationError;
    _Bool _addDataSourceToSDResult;
    long long _poiSource;
    double _radius;
    CLLocation *_initialLocation;
    id <DTMapViewControllerDelegate> _delegate;
    id <DTLocationSearchServiceProtocol> _search;
    DTSearchBar *_searchBar;
    DTTableView *_nearByPOITableView;
    UIButton *_updateUserLoactionButton;
    DTMapViewNoSearchResultHolderUIView *_noSearchResultHolder;
}

@property(retain, nonatomic) DTMapViewNoSearchResultHolderUIView *noSearchResultHolder; // @synthesize noSearchResultHolder=_noSearchResultHolder;
@property(retain, nonatomic) UIButton *updateUserLoactionButton; // @synthesize updateUserLoactionButton=_updateUserLoactionButton;
@property(retain, nonatomic) DTTableView *nearByPOITableView; // @synthesize nearByPOITableView=_nearByPOITableView;
@property(retain, nonatomic) DTSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) id <DTLocationSearchServiceProtocol> search; // @synthesize search=_search;
@property(nonatomic) __weak id <DTMapViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CLLocation *initialLocation; // @synthesize initialLocation=_initialLocation;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) long long poiSource; // @synthesize poiSource=_poiSource;
- (void).cxx_destruct;
- (void)mergePOIs:(id)arg1 toArrary:(id)arg2;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onPOISearchDone:(id)arg1 response:(id)arg2;
- (void)onReGeocodeSearchDone:(id)arg1 response:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 updatingLocation:(_Bool)arg3;
- (void)updateUserLocationAction:(id)arg1;
- (void)resetSelectedPOIs;
- (void)resetPOITableView;
- (_Bool)needRefreshUserLocation:(id)arg1;
- (void)updateMapViewWithUserLocation:(id)arg1;
- (void)searchPOIWithLatitude:(double)arg1 longitude:(double)arg2 keyword:(id)arg3 radius:(double)arg4;
- (void)searchAddressWithLatitude:(double)arg1 longitude:(double)arg2;
- (double)searchScope;
- (void)rightNavigationItemClicked:(id)arg1;
- (void)leftNavigationItemClicked:(id)arg1;
- (void)loadSearchService;
- (_Bool)showForeignMapView;
- (void)loadMapView;
- (void)layoutViewComponents;
@property(readonly, nonatomic) NSMutableArray *keywordsPOIs;
@property(readonly, nonatomic) NSMutableArray *nearByPOIs;
- (void)showInitialLocation;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

