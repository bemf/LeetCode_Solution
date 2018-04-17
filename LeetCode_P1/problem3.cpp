//
//  problem3.cpp
//  LeetCode_P1
//
//  Created by wb on 2018/3/1.
//  Copyright © 2018年 wb. All rights reserved.
//

#include "problem3.hpp"

int Solution3::lengthOfLongestSubstring(string s)
{
    map<char, int> book;
    for(size_t i=0;i<s.size();i++)
    {
        book[s[i]]=-1;
    }
    int len=0; //保留最长的长度
    int pre=-1; //保留第一个出现重复的下标；
    
    for(size_t i=0;i<s.size();i++)
    {
        if(book[s[i]]>pre)
        {
            //出现重复的字符
            pre=book[s[i]];
        }
        book[s[i]]=i;
        len=max(len,book[s[i]]-pre);
    }
    return len;
}

