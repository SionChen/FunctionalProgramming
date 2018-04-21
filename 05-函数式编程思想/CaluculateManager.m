//
//  CaluculateManager.m
//  05-函数式编程思想
//
//  Created by 超级腕电商 on 2017/10/24.
//  Copyright © 2017年 超级腕电商. All rights reserved.
//

#import "CaluculateManager.h"

@implementation CaluculateManager

-(instancetype)caluculate:(int (^)(int))caluculateBlock{
    _result = caluculateBlock(_result);
    return self;
}
@end
