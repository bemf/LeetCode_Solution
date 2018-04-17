//
//  problem49.cpp
//  LeetCode_P1
//
//  Created by wb on 2018/3/2.
//  Copyright © 2018年 wb. All rights reserved.
//

#include "problem49.hpp"
/*
 Given an array of strings, group anagrams together.
 */
vector<vector<string>> Solution49::groupAnagrams(vector<string>& strs)
{
    unordered_map<string, vector<string>> my_map; //key值可以相同的map结构
    string tmp_str;
    for(size_t i=0; i<strs.size();i++)
    {
        tmp_str=strs[i];
        sort(tmp_str.begin(),tmp_str.end());//通过排序字符串的顺序，保证每个字符串含有相同字符的都有相同的key值
        my_map[tmp_str].push_back(strs[i]);
    }
    vector<vector<string>> re;
    unordered_map<string, vector<string>>::iterator it=my_map.begin();
    while(it!=my_map.end())
    {
        re.push_back(it->second);
    }
    return re;
}
