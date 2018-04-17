//
//  prblem15.cpp
//  LeetCode_P1
//
//  Created by wb on 2018/3/6.
//  Copyright © 2018年 wb. All rights reserved.
//
#include "problem15.hpp"
vector<vector<int>> Solution15::threeSum(vector<int> &nums)
{
    vector<vector<int>> re;
    if(nums.size()<=2)
    {
        return re;
    }
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-2;)
    {
        int target=-nums[i];
        int left=i+1;
        int right=nums.size()-1;
        while(left<right)
        {
            if(target>nums[left]+nums[right])
            {
                left++;
            }
            else if(target<nums[left]+nums[right])
            {
                right--;
            }
            else if(target==nums[left]+nums[right])
            {
                vector<int> tmp{nums[i],nums[left],nums[right]};
                re.push_back(tmp);
                left++;
                while(left<right&&nums[left]==nums[left-1]){
                    left++;
                }
            }
        }
        i++;
        while(i<nums.size()-2&&nums[i]==nums[i-1])
        {
            i++;
        }
    }
    return re;
}

void Solution15::test()
{
    vector<int> nums{0,0,0,0,0};
    vector<vector<int>> re=threeSum(nums);
    
    for(int i=0;i<re.size();i++)
    {
        vector_display(re[i]);
    }
}
