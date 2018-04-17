//
//  problem106.hpp
//  LeetCode_P1
//
//  Created by wb on 2018/3/7.
//  Copyright © 2018年 wb. All rights reserved.
//

#ifndef problem106_hpp
#define problem106_hpp

#include "global.h"
class Solution106 {
public:
    TreeNode * buildTreeCore(vector<int>& ino,int in_s, int in_e, vector<int>& postorder, int po_s, int po_e);
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder);
    void test();
};
#endif /* problem106_hpp */
