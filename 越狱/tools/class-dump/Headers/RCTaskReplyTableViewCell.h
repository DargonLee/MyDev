//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class FWBasePersonModel, UIImageView, UILabel, UIView, UIViewController;

@interface RCTaskReplyTableViewCell : UITableViewCell
{
    UIView *_backView;
    UIImageView *_imageView;
    UILabel *_nameLabel;
    UILabel *_contentLabel;
    UILabel *_timeLabel;
    UIView *_lineView;
    FWBasePersonModel *_person;
    UIViewController *_currentViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
- (struct CGSize)getHeightOfLabelWithWidth:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)cellConfigWithDict:(id)arg1;
- (void)headerClick:(id)arg1;
- (void)createView;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

