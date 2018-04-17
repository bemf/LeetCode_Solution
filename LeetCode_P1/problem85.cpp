//
//  problem85.cpp
//  LeetCode_P1
//
//  Created by wb on 2018/3/27.
//  Copyright © 2018年 wb. All rights reserved.
//

#include "problem85.hpp"

int Solution85::maximalRectangle(vector<vector<char> > &matrix)
{
    if(matrix.size()==0)
    {
        return 0;
    }
    int re=0;
    int row=matrix.size();
    int col=matrix[0].size();
    
    stack<int> s;
    vector<int> height(col+1,0);
    int count=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<=col;j++)
        {
            if(j<col)
            {
                if(matrix[i][j]=='1')
                {
                    height[j]++;
                }
                else
                {
                    height[j]=0;
                }
            }
            if(s.empty()||s.top()<=height[j])
            {
                s.push(height[j]);
            }
            else if(s.top()>height[j])
            {
                count=0;
                while(s.empty()==false&&s.top()>height[j])
                {
                    count++;
                    re=max(re,count*s.top());
                    s.pop();
                }
                for(int k=0;k<=count;k++)
                {
                    s.push(height[j]);
                }
            }
        }
        while(s.empty()==false)
        {
            count++;
            re=max(re,count*s.top());
            s.pop();
        }
    }
    
    return re;
}

void Solution85::test()
{
    vector<vector<char>> rect{{'1','0','1','0','0'},{'1','0','1','1','1'},
        {'1','1','1','1','1'},{'1','0','0','1','0'}};
    cout<<maximalRectangle(rect)<<endl;
}
