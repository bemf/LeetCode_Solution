//
//  problem6.cpp
//  LeetCode_P1
//
//  Created by wb on 2018/3/6.
//  Copyright © 2018年 wb. All rights reserved.
//

#include "problem6.hpp"
/*
 给定一个字符串，用zigzag方式来保存字符串，
 本方法用一个dis来实现逆转保存
 */
string Solution6::convert(string s, int numRows)
{
    if(numRows==1)
    {
        return s;
    }
    string re;
    //int sum=numRows+2;
    vector<vector<char>> re_vec;
    vector<char> tmp;
    for(int i=0;i<numRows;i++)
    {
        re_vec.push_back(tmp);
    }
    
    int row=0;
    int dis=1;
    for(int i=0;i<s.size();i++)
    {
        re_vec[row].push_back(s[i]);
        row+=dis;
        if(row>=numRows)
        {
            row=numRows-2;
            dis=-1;
        }
        if(row<=0)
        {
            row=0;
            dis=1;
        }
    }
    
    for(int i=0;i<re_vec.size();i++)
    {
        for(int j=0;j<re_vec[i].size();j++)
        {
            re+=re_vec[i][j];
        }
    }
    
    return re;
}

void Solution6::test()
{
    string a="ABCDEFGHJKLMN";
    cout<<convert(a, 2)<<endl;
}


