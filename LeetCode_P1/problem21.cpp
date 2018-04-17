//
//  problem21.cpp
//  LeetCode_P1
//
//  Created by wb on 2018/3/7.
//  Copyright © 2018年 wb. All rights reserved.
//

#include "problem21.hpp"
ListNode* Solution21::mergeTwoLists(ListNode* l1, ListNode* l2)
{
    ListNode *head;
    if(l1->val<l2->val)
    {
        head=l1;
        l1=l1->next;
    }
    else{
        head=l2;
        l2=l2->next;
    }
    
    ListNode *p=head;
    while(l1&&l2)
    {
        if(l1->val<l2->val)
        {
            p->next=l1;
            l1=l1->next;
        }
        else{
            p->next=l2;
            l2=l2->next;
        }
        p=p->next;
    }
    if(l1)
    {
        p->next=l1;
    }
    else if(l2)
    {
        p->next=l2;
    }
    return head;

}
