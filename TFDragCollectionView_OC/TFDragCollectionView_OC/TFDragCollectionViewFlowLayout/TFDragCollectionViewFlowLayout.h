//
//  TFDragCollectionViewDelegate.h
//  TFDragCollectionView_OC
//
//  Created by Fengtf on 16/3/24.
//  Copyright © 2016年 ftf. All rights reserved.
//

#import <UIKit/UIKit.h>
//TFDragCollectionViewDelegate
@protocol TFDragCollectionViewDelegate <NSObject>

//func moveDataItem(fromIndexPath : NSIndexPath, toIndexPath: NSIndexPath) -> Void
-(void)movieItem:(NSIndexPath *)fromIndexPath toIndexPath:(NSIndexPath *)toIndexPath;

@end


@interface TFDragCollectionViewFlowLayout : UICollectionViewFlowLayout

@end
