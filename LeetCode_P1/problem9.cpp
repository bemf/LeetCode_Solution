//
//  problem9.cpp
//  LeetCode_P1
//
//  Created by wb on 2018/3/6.
//  Copyright © 2018年 wb. All rights reserved.
//

#include "problem9.hpp"

bool Solution9::isPalindrome(int x)
{
    int b=x;
    int a=0;
    if(x<0)
    {
        return 0;
    }
    while(x!=0)
    {
        a=a*10+x%10;
        x=x/10;
    }
    return a==b?1:0;
}

void Solution9::test()
{
    cout<<isPalindrome(-101);
}
