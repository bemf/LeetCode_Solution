//
//  Problem5.cpp
//  LeetCode_P1
//
//  Created by wb on 2018/3/5.
//  Copyright © 2018年 wb. All rights reserved.
//

#include "Problem5.hpp"
/*
 给定一个字符串，求里面的最长回文串并返回
 使用dp求解
 当dp[i][j] 表示i-j之间是回文串，

 */

string Solution5::longestPalindrome(string s)
{
    if(s.size()==0)
    {
        return s;
    }
    vector<int> tmp(s.size(),0);
    vector<vector<int>> dp(s.size(),tmp);
    int left=0;
    int right=0;
    int len=0;
    
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<i;j++)
        {
            if(s[j]==s[i])
            {
                if(i-j<2)//相邻
                {
                    dp[j][i]=1;
                }
                else if(dp[j+1][i-1])//i>j+1
                {
                    dp[j][i]=1;
                }
            }
            if(dp[j][i]&&len<i-j+1)
            {
                left=j;
                right=i;
                len=right-left+1;
            }
        }
        dp[i][i]=1;
    }
    cout<<s.substr(left,right-left+1)<<endl;
    return s.substr(left,right-left+1);
}
