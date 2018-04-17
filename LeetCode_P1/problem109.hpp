//
//  problem109.hpp
//  LeetCode_P1
//
//  Created by wb on 2018/3/7.
//  Copyright © 2018年 wb. All rights reserved.
//

#ifndef problem109_hpp
#define problem109_hpp

#include "global.h"
class Solution109 {
public:
    TreeNode* sortedListToBST(ListNode* head);
    TreeNode* helper(ListNode* head,ListNode* tail);
};
#endif /* problem109_hpp */
