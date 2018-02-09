//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol DTWebEditorToolBarDataSource, DTWebEditorToolBarDelegate;

@interface DTWebEditorToolBar : UIView
{
    id <DTWebEditorToolBarDataSource> _dataSource;
    id <DTWebEditorToolBarDelegate> _delegate;
    long long _totalPages;
}

@property(nonatomic) long long totalPages; // @synthesize totalPages=_totalPages;
@property(nonatomic) __weak id <DTWebEditorToolBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <DTWebEditorToolBarDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)createButtonForIndex:(long long)arg1;
- (void)layoutSubviews;
- (void)onClick:(id)arg1;
- (void)reloadData;
- (id)init;

@end

