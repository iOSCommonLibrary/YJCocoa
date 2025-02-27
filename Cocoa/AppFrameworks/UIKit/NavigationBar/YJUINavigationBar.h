//
//  YJUINavigationBar.h
//  YJNavigationBar
//
//  HomePage:https://github.com/937447974/YJUIocoa
//  YJ技术支持群:557445088
//
//  Created by 阳君 on 16/7/6.
//  Copyright © 2016年 YJUIocoa. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YJUIBarButtonView.h"

NS_ASSUME_NONNULL_BEGIN

/*使用方法
 YJUINavigationBar *nb = [[YJUINavigationBar alloc] initWithFrame:CGRectZero];
 nb.title = @"YJNavigationBar";
 nb.leftBarButtonView.barButtonItem = [[YJUIBarButtonItem alloc] initWithImage:[UIImage imageNamed:@"nav_back"] target:self action:@selector(onClickButton:)];
 self.navigationItem.titleView = nb;
 
 通过[YJUINavigationBar appearance]和[YJUIBarButtonView appearance]可修改默认配置
 
 */

/** 替换UINavigationItem.titleView*/
@interface YJUINavigationBar : UIView

@property (nonatomic) CGFloat leftSpacing;  ///< 左按钮View和标题的间隔,默认10
@property (nonatomic) CGFloat rightSpacing; ///< 右按钮View和标题的间隔,默认10

@property (nonatomic) BOOL middle; ///< 是否绝对居中显示,默认YES（绝对居中时，title距左屏幕边=距右屏幕边）

@property (nonatomic, strong) UIColor *titleColor; ///< 字体颜色,默认黑色
@property (nonatomic, strong) UIFont *titleFont;   ///< 字体大小,默认14

@property (nullable, nonatomic, copy)   NSString *title;   ///< 标题
@property (nullable, nonatomic, strong) UIView *titleView; ///< 自定义titleView

@property (nullable, nonatomic, strong) YJUIBarButtonView *leftBarButtonView;  ///< 左按钮View
@property (nullable, nonatomic, strong) YJUIBarButtonView *rightBarButtonView; ///< 右按钮View

@end

NS_ASSUME_NONNULL_END
