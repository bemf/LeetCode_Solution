//
//  problem22.hpp
//  LeetCode_P1
//
//  Created by wb on 2018/3/7.
//  Copyright © 2018年 wb. All rights reserved.
//

#ifndef problem22_hpp
#define problem22_hpp

#include "global.h"
class Solution22 {
public:
    vector<string> generateParenthesis(int n);
    void generate_helper(string p, vector<string> &re, int left, int right);
    
};

#endif /* problem22_hpp */
