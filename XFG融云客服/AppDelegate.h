//
//  AppDelegate.h
//  XFG融云客服
//
//  Created by 方飞 on 17/1/7.
//  Copyright © 2017年 浙江庆协投资管理有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <RongIMLib/RongIMLib.h>
#import <RongIMKit/RongIMKit.h>


@interface AppDelegate : UIResponder <UIApplicationDelegate,RCIMConnectionStatusDelegate>

@property (strong, nonatomic) UIWindow *window;


@end

