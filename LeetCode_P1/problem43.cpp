//
//  problem43.cpp
//  LeetCode_P1
//
//  Created by wb on 2018/3/22.
//  Copyright © 2018年 wb. All rights reserved.
//

#include "problem43.hpp"

string Solution43::multiply(string num1, string num2)
{
    string re;
    
    int l1=num1.size(),l2=num2.size();
    if(l1==0||l2==0)
    {
        return "0";
    }
    
    vector<int> re_num(l1+l2+1,0);
    //reverse num1 num2
    
    reverse(num1.begin(),num1.end());
    reverse(num2.begin(), num2.end());
    int more=0;
    for(int i=0;i<l1;i++)
    {
        for(int j=0;j<l2;j++)
        {
            int n1=num1[i]-'0';
            int n2=num2[j]-'0';
            re_num[i+j]=n1*n2+re_num[i+j]+more;
            more=re_num[i+j]/10;
            re_num[i+j]=re_num[i+j]%10;
        }
        if(more>0)
        {
            re_num[i+l2]+=more;
        }
        more=0;
    }
    int i;
    for(i=re_num.size()-1;re_num[i]==0;i--)
    {
        
    }
    
    for(int j=i;j>=0;j--)
    {
        re+=to_string(re_num[j]);
    }
    
    return re;
}



void Solution43::test()
{
    string a="99";
    string b="9";
    cout<<multiply(a, b)<<endl;
}
