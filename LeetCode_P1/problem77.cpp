//
//  problem77.cpp
//  LeetCode_P1
//
//  Created by wb on 2018/3/28.
//  Copyright © 2018年 wb. All rights reserved.
//

#include "problem77.hpp"

vector<vector<int>> Solution77::combine(int n, int k)
{
    vector<vector<int>> re;
    if(n<k||n==0||k==0)
    {
        return re;
    }
    vector<int> tmp;
    
    combine_core(tmp, re, n, k, 0);
    
    return re;
}

void Solution77::combine_core(vector<int> &tmp, vector<vector<int> > &re, int n, int k, int index)
{
    //取到k个数，直接push
    if(tmp.size()==k)
    {
        re.push_back(tmp);
    }
    for(int i=index;i<n;i++)
    {
        tmp.push_back(i+1);
        combine_core(tmp, re, n, k, i+1);
        tmp.pop_back();
    }
}

void Solution77::test()
{
    vector<vector<int>> re=combine(4, 2);
    for(int i=0;i<re.size();i++)
    {
        vector_display(re[i]);
    }
}
