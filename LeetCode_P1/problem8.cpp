//
//  problem8.cpp
//  LeetCode_P1
//
//  Created by wb on 2018/3/6.
//  Copyright © 2018年 wb. All rights reserved.
//

#include "problem8.hpp"
/*
 给定一个字符床，转换成int类型
 */
int Solution8::myAtoi(string str)
{
    int re=0; //还是可能被str超过
    bool isNeg=0;
    
    
    int i;
    for(i=0;i<str.size();i++)
    {
        if(str[i]!=' ')
        {
            break;
        }
    }
    //过滤符号；
    if(str[i]=='-'||str[i]=='+')
    {
        if(str[i]=='-')
        {
            isNeg=1;
        }
        i++;
    }
    
    int n=str.size();
    //判断str[i]是否是数字
    while(i<n&&(str[i]>='0'&&str[i]<='9'))
    {
        if(re>INT_MAX/10||(re==INT_MAX/10&&str[i]>'7'))
        {
            return isNeg?INT_MIN:INT_MAX;
        }
        else{
            re=re*10+str[i]-'0';
        }
        i++;
    }
    return isNeg?-re:re;
}

void Solution8::test()
{
    string str="-1234567";
    cout<<myAtoi(str)<<endl;
}
