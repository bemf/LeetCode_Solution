//
//  problem105.cpp
//  LeetCode_P1
//
//  Created by wb on 2018/3/13.
//  Copyright © 2018年 wb. All rights reserved.
//

#include "problem116.hpp"

void Solution116::connect(TreeLinkNode *root)
{
    if(root==NULL)
    {
        return ;
    }
    queue<TreeLinkNode *>q;
    q.push(root);
    while(!q.empty())
    {
        int len=q.size();
        for(int i=0;i<len;i++)
        {
            TreeLinkNode *t=q.front();
            q.pop();
            if(i==len-1)
            {
                t->next=NULL;
            }
            else{
                t->next=q.front();
            }
            if(t->left)
            {
                q.push(t->left);
            }
            if(t->right)
            {
                q.push(t->right);
            }
        }
    }
}
