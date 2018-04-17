//
//  problem20.cpp
//  LeetCode_P1
//
//  Created by wb on 2018/3/7.
//  Copyright © 2018年 wb. All rights reserved.
//

#include "problem20.hpp"
/*
 判断字符串的括号是否合法
 */

bool Solution20::isValid(string s)
{
    stack<char > my_stack;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='('||s[i]=='['||s[i]=='{')
        {
            my_stack.push(s[i]);
        }
        else if(s[i]==')')
        {
            if(!my_stack.empty()&&my_stack.top()=='(')
            {
                my_stack.pop();
            }
            else{
                return false;
            }
        }
        else if(s[i]==']')
        {
            if(!my_stack.empty()&&my_stack.top()=='[')
            {
                my_stack.pop();
            }
            else{
                return false;
            }
        }
        else if(s[i]=='}')
        {
            if(!my_stack.empty()&&my_stack.top()=='{')
            {
                my_stack.pop();
            }
            else{
                return false;
            }
        }
    }
    if(my_stack.empty())
    {
        return true;
    }
    else{
        return false;
    }
}
