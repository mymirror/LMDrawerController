//
//  LMDrawerController.h
//  LMDrawerController
//
//  Created by ponted on 2018/11/5.
//  Copyright © 2018 Shenzhen Blood Link Medical Technology Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LMDrawerController : UIViewController

/**
 *  快速获得抽屉控制器
 *
 *  @return shareDrawerVc
 */
+ (instancetype)shareDrawerVc;
/**
 *  快速创建抽屉控制器
 *
 *  @param mainVc     主控制器－UITabBarController
 *  @param leftMenuVc 左边菜单控制器
 *  @param leftWith 左边控制器现实的最大宽度
 *  @param showCover 显示主视图遮罩
 *  @return 抽屉控制器
 */
+ (instancetype)drawerVcWithMainVc:(UIViewController *)mainVc leftMenuVc:(UIViewController *)leftMenuVc leftWith:(CGFloat)leftWith showCover:(BOOL)showCover;
/**
 *  打开左边控制器方法
 */
- (void)openLeftVc;
/**
 *  切换控制器的方法
 *
 *  @param destVc 目标控制器
 */
- (void)switchViewController:(UIViewController *)destVc;
/**
 *  回到主界面
 */
- (void)backHomeViewController;

@end

NS_ASSUME_NONNULL_END
