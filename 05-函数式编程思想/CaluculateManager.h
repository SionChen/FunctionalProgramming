//
//  CaluculateManager.h
//  05-函数式编程思想
//
//  Created by 超级腕电商 on 2017/10/24.
//  Copyright © 2017年 超级腕电商. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CaluculateManager : NSObject
@property (nonatomic,assign) int result;
//计算
-(instancetype)caluculate:(int(^)(int))caluculateBlock;
@end
