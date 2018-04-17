//
//  problem110.cpp
//  LeetCode_P1
//
//  Created by wb on 2018/3/7.
//  Copyright © 2018年 wb. All rights reserved.
//

#include "problem111.hpp"

int minDepth(TreeNode* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int dep=0;
    queue<TreeNode *> q;
    q.push(root);
    while(!q.empty())
    {
        int len=q.size();
        dep++;
        for(int i=0;i<len;i++)
        {
            TreeNode *p=q.front();
            q.pop();
            if(p->left)
            {
                q.push(p->left);
            }
            if(p->right)
            {
                q.push(p->right);
            }
            if(p->left==NULL&&p->right==NULL)//叶子结点
            {
                return dep;
            }
        }
    }
    
    return dep;
}
