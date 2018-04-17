//
//  problem84.cpp
//  LeetCode_P1
//
//  Created by wb on 2018/3/27.
//  Copyright © 2018年 wb. All rights reserved.
//

#include "problem84.hpp"

int Solution84::largestRectangleArea(vector<int> &heights)
{
    int re=0;
    stack<int> s;
    
    for(int i=0;i<heights.size();i++)
    {
        if(s.empty())
        {
            s.push(heights[i]);
        }
        else if(s.top()<=heights[i])
        {
            s.push(heights[i]);
        }
        else if(s.top()>heights[i])
        {
            int count=0;
            while(s.empty()==false&&s.top()>heights[i])
            {
                count++;
                re=max(re,count*s.top());
                s.pop();
            }
            for(int j=0;j<=count;j++)
            {
                s.push(heights[i]);
            }
        }
    }
    
    int count=0;
    while(s.empty()==false)
    {
        count++;
        re=max(re,count*s.top());
        s.pop();
    }
    
    return re;
}

void Solution84::test()
{
    vector<int> tmp{2,0,2};
    cout<<largestRectangleArea(tmp)<<endl;
}
