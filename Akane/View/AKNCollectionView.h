//
// This file is part of Akane
//
// Created by Simone Civetta on 11/04/15.
// For the full copyright and license information, please view the LICENSE
// file that was distributed with this source code
//

#import <UIKit/UIKit.h>
#import "AKNViewComponent.h"

@class AKNCollectionViewAdapter;

@interface AKNCollectionView : UICollectionView<AKNViewComponent>

@property(nonatomic, strong)AKNCollectionViewAdapter        *adapter;

@property(nonatomic, weak)id<AKNViewModel>                  viewModel;

@end
