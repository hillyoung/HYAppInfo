//
//  AppInfo.h
//  AppInfo
//
//  Created by hb28130 on 7/3/2025.
//

#import <Foundation/Foundation.h>

@interface HYAppInfo : NSObject
/// 加载设备App信息
/// - Parameter completion: 完成的回调
+ (void)loadAppInfo:(void(^)(NSDictionary *appInfo))completion ;

@end
