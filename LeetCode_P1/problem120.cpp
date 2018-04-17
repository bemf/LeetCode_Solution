//
//  problem120.cpp
//  LeetCode_P1
//
//  Created by wb on 2018/3/13.
//  Copyright © 2018年 wb. All rights reserved.
//

#include "problem120.hpp"

int Solution120::minimumTotal(vector<vector<int>> &tri)
{
    vector<int> bot(tri.size(),0);
    for(int i=0;i<tri.size();i++)
    {
        if(i==0)
        {
            bot[0]=tri[0][0];
        }
        for(int j=i;j>=0;j--)//从后面开始遍历，是因为第bot[j]个需要依赖bot[j-1]和bot[j]
        {
            if(j==0)
            {
                bot[j]+=tri[i][j];
            }
            else if(j==i)
            {
                bot[j]+=tri[i][j]+bot[j-1];
            }
            else{
                bot[j]=tri[i][j]+min(bot[j-1],bot[j]);
            }
            
        }
    }
    
    int min=bot[0];
    for(int i=1;i<bot.size();i++)
    {
        if(bot[i]<min)
        {
            min=bot[i];
        }
    }
    return min;
}
