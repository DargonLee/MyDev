//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel;

@interface PGDatePickerView : UITableViewCell
{
    _Bool _currentDate;
    NSString *_content;
    UILabel *_label;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UILabel *label; // @synthesize label=_label;
@property(nonatomic, getter=isCurrentDate) _Bool currentDate; // @synthesize currentDate=_currentDate;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

