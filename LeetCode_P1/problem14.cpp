//
//  problem14.cpp
//  LeetCode_P1
//
//  Created by wb on 2018/3/6.
//  Copyright © 2018年 wb. All rights reserved.
//

#include "problem14.hpp"

string Solution14::longestCommonPrefix(vector<string> &strs)
{
    string re;
    if(strs.empty())
    {
        return re;
    }
    if(strs.size()==1)
    {
        return strs[0];
    }
    int i,j;
    char c;
    for(i=0;i<strs[0].size();i++)
    {
        c=strs[0][i];
        for(j=1;j<strs.size();j++)
        {
            if(i>strs[j].size()||strs[j][i]!=c)
            {
                return re;
            }
        }
        re+=c;
    }
    return re;
}

void Solution14::test()
{
    vector<string> strs{"123","12","1234"};
    cout<<longestCommonPrefix(strs)<<endl;
}
