//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

@class NSString;

@interface DTMailEmployeeViewController : DTViewController
{
    long long _empOrgId;
    NSString *_empEmail;
    NSString *_empOrgName;
    NSString *_orgToken;
}

@property(copy, nonatomic) NSString *orgToken; // @synthesize orgToken=_orgToken;
@property(copy, nonatomic) NSString *empOrgName; // @synthesize empOrgName=_empOrgName;
@property(copy, nonatomic) NSString *empEmail; // @synthesize empEmail=_empEmail;
@property(nonatomic) long long empOrgId; // @synthesize empOrgId=_empOrgId;
- (void).cxx_destruct;
- (void)navRemoveSelfController;
- (void)btnBindPress:(id)arg1;
- (void)didReceiveMemoryWarning;
- (double)textViewWidth:(id)arg1;
- (void)initViewContent;
- (void)viewDidLoad;

@end

