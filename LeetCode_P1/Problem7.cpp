//
//  Problem7.cpp
//  LeetCode_P1
//
//  Created by wb on 2018/3/6.
//  Copyright © 2018年 wb. All rights reserved.
//

#include "Problem7.hpp"
/*
 给定一个整数，进行反转,+/-无反应，使用long long来保存，当大于INT_MAX或小于INT_MIN就返回0
 */
int Solution7::reverse(int x)
{
    long long r=0;
    while(x!=0)
    {
        r=r*10+x%10;
        x=x/10;
    }
    cout<<r<<endl;
    return (r>INT_MAX||r<INT_MIN)?0:(static_cast<int>(r));
}

void Solution7::test()
{
    int a=-123456;
    cout<<reverse(a)<<endl;
}
