//
//  JYCollectionViewCell.h
//  UICollectionViewController(引导页)
//
//  Created by qingyun on 15/12/14.
//  Copyright © 2015年 qingyun. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JYCollectionViewCell : UICollectionViewCell
@property (nonatomic, strong) UIImage  *image;

- (void)setIndexPath:(NSIndexPath *)indexPath count:(int)count;
@end
