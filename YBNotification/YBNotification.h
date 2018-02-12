//
//  YBNotification.h
//  YBNotificationDemo
//
//  Created by 杨少 on 2018/2/12.
//  Copyright © 2018年 杨波. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YBNotification : NSObject

@property (readonly, copy) NSString *name;
@property (nullable, readonly, weak) id object;
@property (nullable, readonly, copy) NSDictionary *userInfo;

- (instancetype)initWithName:(NSString *)name object:(nullable id)object userInfo:(nullable NSDictionary *)userInfo;

@end

@interface YBNotificationCenter : NSObject

@property (class, readonly, strong) YBNotificationCenter *defaultCenter;

- (void)addObserver:(id)observer selector:(SEL)aSelector name:(nullable NSString *)aName object:(nullable id)anObject;

- (void)postNotification:(YBNotification *)notification;

- (void)removeObserver:(id)observer name:(nullable NSString *)aName object:(nullable id)anObject;

@end

NS_ASSUME_NONNULL_END