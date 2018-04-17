//
//  problem2.cpp
//  LeetCode_P1
//
//  Created by wb on 2018/3/1.
//  Copyright © 2018年 wb. All rights reserved.
//

#include "problem2.hpp"

ListNode* Solution2::addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode *re=new ListNode(0);
    re->next=l1;
    int over=0;
    while(l1&&l2)
    {
        l1->val=l1->val+l2->val+over;
        over=0;
        if(l1->val>=10)
        {
            l1->val=l1->val-10;
            over+=1;
        }
        if(l1->next==NULL)
        {
            l1->next=l2->next;
            if(l1->next==NULL&&over)
            {
                l1->next=new ListNode(over);
            }
            else{
                l1->next->val+=over;
            }
            break;
        }
        l1=l1->next;
        l2=l2->next;
    }
    
    return re->next;
}

void Solution2::test()
{
    vector<int> n1{5,6,7};
    vector<int> n2{1,2,3,2};
    ListNode *l1=generateListNode(n1);
    ListNode *l2=generateListNode(n2);
    
    
    ListNode *r=addTwoNumbers(l1, l2);
    ListNode_display(r);
    
    
}
