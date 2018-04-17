//
//  problem109.cpp
//  LeetCode_P1
//
//  Created by wb on 2018/3/7.
//  Copyright © 2018年 wb. All rights reserved.
//

#include "problem109.hpp"

TreeNode* Solution109::sortedListToBST(ListNode* head)
{
    return helper(head, NULL);
}

TreeNode* Solution109::helper(ListNode* head, ListNode* tail)
{
    if(head==tail)
    {
        return NULL;
    }
    if(head->next==tail)
    {
        TreeNode* node=new TreeNode(head->val);
        return node;
    }
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    TreeNode* node=new TreeNode(slow->val);
    node->left=helper(head, slow);
    node->right=helper(slow->next, tail);
    return node;
}
