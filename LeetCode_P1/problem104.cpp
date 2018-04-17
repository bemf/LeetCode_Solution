//
//  problem104.cpp
//  LeetCode_P1
//
//  Created by wb on 2018/3/6.
//  Copyright © 2018年 wb. All rights reserved.
//

#include "problem104.hpp"
int Solution104::maxDepth(TreeNode *root)
{
    if(root ==NULL)
    {
        return 0;
    }
    int re=0;
    queue<TreeNode *> q;
    q.push(root);

    while(!q.empty())
    {
        re++;
        int len=q.size();
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
        }
    }
    return re;
}
