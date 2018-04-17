//
//  problem22.cpp
//  LeetCode_P1
//
//  Created by wb on 2018/3/7.
//  Copyright © 2018年 wb. All rights reserved.
//

#include "problem22.hpp"
vector<string> Solution22::generateParenthesis(int n)
{
    vector<string> re;
    string p;
    generate_helper(p, re, n, 0);
    return re;
}

void Solution22::generate_helper(string p, vector<string> &re, int left, int right)
{
    if(left==0&&right==0)
    {
        re.push_back(p);
        return ;
    }
    if(left)
    {
        generate_helper(p+"(", re, left-1, right+1);
    }
    if(right)
    {
        generate_helper(p+")",re, left, right-1);
    }
}
