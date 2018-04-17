//
//  problem1.cpp
//  LeetCode_P1
//
//  Created by wb on 2018/3/1.
//  Copyright © 2018年 wb. All rights reserved.
//

#include "problem1.hpp"
vector<int> Solution1::twoSum(vector<int> &nums, int target)
{
    sort(nums.begin(),nums.end());
    int len=nums.size();
    vector<int> r;
    int my_target;
    for(int i=0;i<len-1;i++)
    {
        my_target=target-nums[i];
        int begin=i+1;
        int end=len-1;
        
        while(begin<=end)
        {
            int middle=(begin+end)/2;
            if(my_target==nums[middle])
            {
                r.push_back(nums[i]);
                r.push_back(nums[middle]);
                return r;
            }
            else if(my_target>nums[middle])
            {
                begin=middle+1;
            }
            else if(my_target<nums[middle])
            {
                end=middle-1;
            }
        }
    }
    
    return r;
}

void Solution1::test()
{
 
    vector<int> num{1,2,3,4,5};
    vector<int> r=twoSum(num, 9);
    
    vector_display(r);
}
