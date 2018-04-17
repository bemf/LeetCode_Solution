//
//  problem106.cpp
//  LeetCode_P1
//
//  Created by wb on 2018/3/7.
//  Copyright © 2018年 wb. All rights reserved.
//

#include "problem106.hpp"
TreeNode* Solution106::buildTreeCore(vector<int>& ino,int in_s, int in_e, vector<int>& pos, int po_s, int po_e)
{
    if(po_s>po_e)
    {
        return NULL;
    }
    
    int val=pos[po_e-1];
    TreeNode *node=new TreeNode(val);
    auto it=find(ino.begin(),ino.end(),val);
    int dis=it-ino.begin()-in_s;
    
    node->left=buildTreeCore(ino, in_s, in_s+dis, pos, po_s, po_s+dis);
    node->right=buildTreeCore(ino, in_s+dis+1, in_e, pos, po_s+dis, po_e-1);
    
    return node;
}

TreeNode* Solution106::buildTree(vector<int>& inorder, vector<int>& postorder)
{
    return buildTreeCore(inorder, 0, inorder.size(), postorder, 0, postorder.size());
}
