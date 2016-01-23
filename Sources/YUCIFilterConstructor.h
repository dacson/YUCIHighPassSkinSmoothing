//
//  YUCIFilterConstructor.h
//  Pods
//
//  Created by YuAo on 1/23/16.
//
//

#import <Foundation/Foundation.h>

/*
 Using class with name `filterName` to construct a filter object.
 */

@interface YUCIFilterConstructor : NSObject <CIFilterConstructor>

+ (instancetype)constructor;

- (instancetype)init NS_UNAVAILABLE;

@end
