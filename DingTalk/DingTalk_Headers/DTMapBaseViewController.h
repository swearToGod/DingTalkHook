//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "AMapSearchDelegate-Protocol.h"
#import "DTBoxedMapViewDelegate-Protocol.h"
#import "DTMapViewControllerProtocol-Protocol.h"
#import "MAMapViewDelegate-Protocol.h"
#import "MKMapViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AMapPOI, DTBoxedMapView, DTSearchBar, DTTableView, NSError, NSString, UIButton, UISearchDisplayController, UIView, YYThreadSafeArray;
@protocol DTLocationSearchServiceProtocol, DTMapViewControllerDelegate;

@interface DTMapBaseViewController : DTViewController <MAMapViewDelegate, MKMapViewDelegate, DTMapViewControllerProtocol, AMapSearchDelegate, DTBoxedMapViewDelegate, UISearchDisplayDelegate, UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate>
{
    _Bool _diableAMapForeignView;
    _Bool _nearByHasMorePOIs;
    _Bool _keywordHasMorePOIs;
    _Bool _updateLocationDenied;
    _Bool _hasSetupMapType;
    long long _poiSource;
    id <DTMapViewControllerDelegate> _delegate;
    UIView *_mapView;
    DTBoxedMapView *_boxedMapView;
    UISearchDisplayController *_SDController;
    id <DTLocationSearchServiceProtocol> _search;
    DTSearchBar *_searchBar;
    DTTableView *_nearByPOITableView;
    UIButton *_updateUserLoactionButton;
    YYThreadSafeArray *_nearByPOIs;
    AMapPOI *_selectedPOI;
    long long _nearByPOIRequestPage;
    YYThreadSafeArray *_keywordsPOIs;
    AMapPOI *_selectedKeywordPOI;
    long long _keywordPOIRequestPage;
    NSString *_locationAddress;
    NSString *_cityCode;
    NSString *_nearbyPOIKeyword;
    NSError *_updateLocationError;
    struct CLLocationCoordinate2D _lastCoordinate;
}

@property(nonatomic) _Bool hasSetupMapType; // @synthesize hasSetupMapType=_hasSetupMapType;
@property(nonatomic) struct CLLocationCoordinate2D lastCoordinate; // @synthesize lastCoordinate=_lastCoordinate;
@property(nonatomic) NSError *updateLocationError; // @synthesize updateLocationError=_updateLocationError;
@property(nonatomic) _Bool updateLocationDenied; // @synthesize updateLocationDenied=_updateLocationDenied;
@property(copy, nonatomic) NSString *nearbyPOIKeyword; // @synthesize nearbyPOIKeyword=_nearbyPOIKeyword;
@property(copy, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(copy, nonatomic) NSString *locationAddress; // @synthesize locationAddress=_locationAddress;
@property(nonatomic) _Bool keywordHasMorePOIs; // @synthesize keywordHasMorePOIs=_keywordHasMorePOIs;
@property(nonatomic) long long keywordPOIRequestPage; // @synthesize keywordPOIRequestPage=_keywordPOIRequestPage;
@property(copy, nonatomic) AMapPOI *selectedKeywordPOI; // @synthesize selectedKeywordPOI=_selectedKeywordPOI;
@property(retain, nonatomic) YYThreadSafeArray *keywordsPOIs; // @synthesize keywordsPOIs=_keywordsPOIs;
@property(nonatomic) _Bool nearByHasMorePOIs; // @synthesize nearByHasMorePOIs=_nearByHasMorePOIs;
@property(nonatomic) long long nearByPOIRequestPage; // @synthesize nearByPOIRequestPage=_nearByPOIRequestPage;
@property(copy, nonatomic) AMapPOI *selectedPOI; // @synthesize selectedPOI=_selectedPOI;
@property(retain, nonatomic) YYThreadSafeArray *nearByPOIs; // @synthesize nearByPOIs=_nearByPOIs;
@property(retain, nonatomic) UIButton *updateUserLoactionButton; // @synthesize updateUserLoactionButton=_updateUserLoactionButton;
@property(retain, nonatomic) DTTableView *nearByPOITableView; // @synthesize nearByPOITableView=_nearByPOITableView;
@property(retain, nonatomic) DTSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) id <DTLocationSearchServiceProtocol> search; // @synthesize search=_search;
@property(retain, nonatomic) UISearchDisplayController *SDController; // @synthesize SDController=_SDController;
@property(retain, nonatomic) DTBoxedMapView *boxedMapView; // @synthesize boxedMapView=_boxedMapView;
@property(retain, nonatomic) UIView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) __weak id <DTMapViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool diableAMapForeignView; // @synthesize diableAMapForeignView=_diableAMapForeignView;
@property(nonatomic) long long poiSource; // @synthesize poiSource=_poiSource;
- (void).cxx_destruct;
- (id)boxedMapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)boxedMapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)boxedMapView:(id)arg1 didUpdateUserLocation:(id)arg2 updatingLocation:(_Bool)arg3;
- (void)boxedMapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)boxedMapView:(id)arg1 mapDidMoveByUser:(_Bool)arg2;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 updatingLocation:(_Bool)arg3;
- (void)mapView:(id)arg1 mapDidMoveByUser:(_Bool)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateUserLocationClicked:(id)arg1;
- (void)rightNavigationItemClicked:(id)arg1;
- (void)leftNavigationItemClicked:(id)arg1;
- (void)loadSearchService;
- (_Bool)resetupMapViewsWithCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)loadMapKitMapView;
- (void)loadAMapView;
- (void)loadOutMapView;
- (void)loadInnerMapView;
- (void)loadMapView;
- (void)clearMapView;
- (void)layoutViewComponents;
- (void)loadMainFrameComponents;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithLocation:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
