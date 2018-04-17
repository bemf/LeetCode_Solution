//
//  problem44.cpp
//  LeetCode_P1
//
//  Created by wb on 2018/3/22.
//  Copyright © 2018年 wb. All rights reserved.
//

#include "problem44.hpp"
bool Solution44::isMatch(string s, string p)
{
    int n=s.size();
    int m=p.size();
    vector<vector<bool>> dp(n+1,vector<bool>(m+1,false));
    dp[0][0]=true;
    for(int j=1;j<=m;j++)
    {
        dp[0][j]=dp[0][j-1]&&p[j-1]=='*';
        for(int i=1;i<=n;i++)
        {
            if(p[j-1]=='?'||s[i-1]==p[j-1])
            {
                dp[i][j]=dp[i-1][j-1];
            }
            else if(p[j-1]=='*')
            {
                dp[i][j]=dp[i][j-1]||dp[i-1][j-1];
            }
        }
    }
    
    return dp[m][n];
}

void Solution44::test()
{
    string a="abad";
    string b="?*ab";
    cout<<isMatch(a, b)<<endl;
}


