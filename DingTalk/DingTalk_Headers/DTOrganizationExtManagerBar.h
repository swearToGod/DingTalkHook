//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTAdsBubbleView, DTOrganizationManagerBar;
@protocol DTOrganizationExtManagerBarDelegate;

@interface DTOrganizationExtManagerBar : UIView
{
    DTAdsBubbleView *_adsBubble;
    DTOrganizationManagerBar *_managerBar;
    id <DTOrganizationExtManagerBarDelegate> _delegate;
    long long _orgId;
}

@property(nonatomic) long long orgId; // @synthesize orgId=_orgId;
@property(nonatomic) __weak id <DTOrganizationExtManagerBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) DTOrganizationManagerBar *managerBar; // @synthesize managerBar=_managerBar;
@property(retain, nonatomic) DTAdsBubbleView *adsBubble; // @synthesize adsBubble=_adsBubble;
- (void).cxx_destruct;
- (void)adsBubbleTapped:(id)arg1;
- (void)layoutSubviews;
- (_Bool)shouldShowAdsBubble;
- (void)updateManagerBar;
- (id)initWithOrganizationId:(long long)arg1;

@end

