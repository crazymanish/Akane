//
// This file is part of Akane
//
// Created by JC on 22/03/15.
// For the full copyright and license information, please view the LICENSE
// file that was distributed with this source code
//

#import <Foundation/Foundation.h>

@class AKNTableViewCell;
@class AKNReusableViewHandler;
@protocol AKNItemViewModel;
@protocol AKNViewComponent;

@interface AKNTableViewAdapter (Private)

- (void)customInit;

- (id<AKNItemViewModel>)sectionModel:(NSInteger)section;
- (id<AKNItemViewModel>)indexPathModel:(NSIndexPath *)indexPath;

- (NSString *)identifierForViewModel:(id<AKNItemViewModel>)viewModel inSection:(NSInteger)section;

- (UITableViewCell *)dequeueReusableCellWithIdentifier:(NSString *)identifier forIndexPath:(NSIndexPath *)indexPath;
- (UIView<AKNViewComponent> *)dequeueReusableSectionWithIdentifier:(NSString *)identifier forSection:(NSInteger)section;

- (UIView<AKNViewComponent> *)createReusableViewWithIdentifier:(NSString *)identifier;
- (AKNReusableViewHandler *)handlerForIdentifier:(NSString *)identifier;

@end
