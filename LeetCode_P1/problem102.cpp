//
//  lc102.cpp
//  LeetCode_P1
//
//  Created by wb on 2018/3/2.
//  Copyright © 2018年 wb. All rights reserved.
//

#include "problem102.hpp"
vector<vector<int>> Solution102::levelOrder(TreeNode *root)
{
    vector<vector<int>> re;
    vector<int> level;
    deque<TreeNode *> q;
    if(root==NULL)
    {
        return re;
    }
    q.push_back(root);
    TreeNode *p;
    int len;
    while(!q.empty())
    {
        level.clear();
        len=q.size();
        for(int i=0;i<len;i++)
        {
            p=q.front();
            level.push_back(p->val);
            if(p->left)
            {
                q.push_back(p->left);
            }
            if(p->right)
            {
                q.push_back(p->right);
            }
            q.pop_front();
        }
        re.push_back(level);
    }
    return re;
}

void Solution102::test()
{
    
}

