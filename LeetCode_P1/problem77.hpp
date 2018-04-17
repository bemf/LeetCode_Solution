//
//  problem77.hpp
//  LeetCode_P1
//
//  Created by wb on 2018/3/28.
//  Copyright © 2018年 wb. All rights reserved.
//

#ifndef problem77_hpp
#define problem77_hpp

#include "global.h"

class Solution77 {
public:
    vector<vector<int>> combine(int n, int k);
    void combine_core(vector<int> &tmp, vector<vector<int>> &re, int n, int k, int index);
    void test();
};
#endif /* problem77_hpp */
