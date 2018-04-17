//
//  problem110.hpp
//  LeetCode_P1
//
//  Created by wb on 2018/3/13.
//  Copyright © 2018年 wb. All rights reserved.
//

#ifndef problem110_hpp
#define problem110_hpp

#include "global.h"

class Solution110 {
public:
    int TreeDepth(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int nleft;
        int nright;
        nleft=TreeDepth(root->left);
        nright=TreeDepth(root->right);
        return nleft>nright?(nleft+1):(nright+1);
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
        {
            return true;
        }
        int nleft=TreeDepth(root->left);
        int nright=TreeDepth(root->right);
        cout<<nleft<<" "<<nright<<endl;
        if(abs(nleft-nright)>1){return false;}
        else{
            return isBalanced(root->left)&&isBalanced(root->right);
        }
    }
};
#endif /* problem110_hpp */
