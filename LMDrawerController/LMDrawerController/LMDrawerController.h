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
 *   显示主界面的遮罩  默认显示
 */
@property (nonatomic,assign) BOOL showCover;


/**
 *   显示主界面的阴影 默认不显示
 */
@property (nonatomic,assign) BOOL showShadow;

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
 *  @return 抽屉控制器
 */
+ (instancetype)drawerVcWithMainVc:(UIViewController *)mainVc leftMenuVc:(UIViewController *)leftMenuVc leftWith:(CGFloat)leftWith;
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
