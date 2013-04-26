//
//  LAStoryCell.h
//  LobsterApp
//
//  Created by Rhys Powell on 4/01/13.
//  Copyright (c) 2013 Rhys Powell. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Story;

@interface LAStoryCell : UITableViewCell

@property (strong, nonatomic) IBOutlet UILabel *storyTitleLabel;
@property (strong, nonatomic) IBOutlet UILabel *authorNameLabel;
@property (strong, nonatomic) IBOutlet UILabel *commentCountLabel;

+ (CGFloat)cellHeightForWidth:(CGFloat)width withStory:(Story *)story;

- (void)configureWithStory:(Story *)story;

@end
