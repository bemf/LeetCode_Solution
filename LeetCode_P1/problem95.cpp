//
//  problem95.cpp
//  LeetCode_P1
//
//  Created by wb on 2018/3/2.
//  Copyright © 2018年 wb. All rights reserved.
//

#include "problem95.hpp"

vector<TreeNode *> Solution95::generateTrees(int n)
{
    if(n==0)
    {
        return vector<TreeNode *>();
    }
    else
    {
        return generateTrees_Core(1, n);
    }
}

vector<TreeNode *> Solution95::generateTrees_Core(int start, int end)
{
    vector<TreeNode *> ret;
    if(start>end)
    {
        ret.push_back(new TreeNode(0));
    }
    else if(start==end)
    {
        ret.push_back(new TreeNode(start));
    }
    else{
        //以i为根节点，分别求其左子树和右子树
        for(int i=start; i<=end; i++)
        {
            //所有可能的左子树
            vector<TreeNode *>l=generateTrees_Core(start, i-1);
            //所有可能的右子树
            vector<TreeNode *>r=generateTrees_Core(i+1, end);
            for(int j=0;j<l.size();j++)
            {
                for(int k=0; k<r.size();k++)
                {
                    TreeNode *root=new TreeNode(i);
                    root->left=l[j];
                    root->right=r[k];
                    ret.push_back(root);
                }
            }
            
        }
    }
    return ret;
}

void Solution95::test()
{
    vector<TreeNode *> r=generateTrees(3);
    cout<<r.size()<<endl;
}


