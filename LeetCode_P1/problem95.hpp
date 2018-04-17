//
//  problem95.hpp
//  LeetCode_P1
//
//  Created by wb on 2018/3/2.
//  Copyright © 2018年 wb. All rights reserved.
//

#ifndef problem95_hpp
#define problem95_hpp

#include "global.h"
class Solution95 {
public:
    vector<TreeNode*> generateTrees(int n);
    vector<TreeNode*> generateTrees_Core(int start, int end);
    void test();
};
#endif /* problem95_hpp */
