//
//  problem29.cpp
//  LeetCode_P1
//
//  Created by wb on 2018/3/8.
//  Copyright © 2018年 wb. All rights reserved.
//

#include "problem29.hpp"
int  divide(int dividend, int divisor){
    int re=0;
    if(divisor==1)
    {
        return dividend;
    }
    if(dividend==INT_MIN&&divisor==-1)
    {
        return INT_MAX;
    }
    
    int sign=dividend>0^divisor>0?-1:1;
    
    int end=abs(dividend);
    int sor=abs(divisor);
    
    while(end>=sor)
    {
        int t=sor;
        int pow=1;
        while((t<<1)<end)
        {
            t<<=1;
            pow<<=1;
        }
        re+=pow;
        end-=t;
        
    }
    return sign*re;
}
