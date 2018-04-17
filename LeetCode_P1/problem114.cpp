//
//  problem114.cpp
//  LeetCode_P1
//
//  Created by wb on 2018/3/13.
//  Copyright © 2018年 wb. All rights reserved.
//

#include "problem114.hpp"

void Solution114::flatten(TreeNode *root)
{
    //思路就是把右子树的节点放到左边来
    while(root)
    {
        if(root->left&&root->right)
        {
            TreeNode* t=root->left;
            while(t->right)
            {
                t=t->right;
            }
            t->right=root->right;
        }
        //将左边清空
        if(root->left)
        {
            root->right=root->left;
        }
        root->left=NULL;
        root=root->right;
    }
}
