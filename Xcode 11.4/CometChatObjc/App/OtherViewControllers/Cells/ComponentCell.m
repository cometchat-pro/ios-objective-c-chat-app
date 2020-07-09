//
//  UIComponentCell.m
//  CometChatObjc
//
//  Created by Pushpsen on 31/03/20.
//  Copyright © 2020 Pushpsen. All rights reserved.
//

#import "ComponentCell.h"

@implementation ComponentCell

@synthesize shadowView;

- (void)awakeFromNib {
    [super awakeFromNib];
    self.selectionStyle = UITableViewCellSelectionStyleNone;
    self.shadowView.layer.masksToBounds = NO;
    self.shadowView.layer.shadowColor = [UIColor grayColor].CGColor;
    self.shadowView.layer.shadowOpacity = 0.3;
    self.shadowView.layer.shadowOffset = CGSizeMake(.0f,.0f);
    self.shadowView.layer.shadowRadius = 5;
}


- (IBAction)navigateButtonPressed:(id)sender {
    [_delegate didNavigateButtonPressed];
}


- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
