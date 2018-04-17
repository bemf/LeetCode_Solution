//
//  problem143.cpp
//  LeetCode_P1
//
//  Created by wb on 2018/3/15.
//  Copyright © 2018年 wb. All rights reserved.
//

#include "problem143.hpp"


//1-2-3-4-5-6
//1-2-3
//6-5-4
//1-6-2-5-3-4

void Solution143::reorderList(ListNode *head)
{
    
    if(head==NULL||head->next==NULL)
    {
        return ;
    }
    ListNode *head1=head;
    ListNode *head2=head->next;
    
    while(head2&&head2->next)
    {
        head1=head1->next;
        head2=head2->next->next;
    }
    //将head2置为head1 head1为中间的节点
    
    head2=head1->next;
    head1->next=NULL;
    
    ListNode *tmp;
    ListNode *pre=NULL;
    //将head2反转
    while(head2->next)
    {
        tmp=head2->next;
        head2->next=pre;
        pre=head2;
        head2=tmp;
    }
    head2->next=pre;
    
    head1=head;
    ListNode *tmp2;
    while(head2)
    {
        tmp=head1->next;
        tmp2=head2->next;
        head1->next=head2;
        head1=head1->next;
        head1->next=tmp;
        head1=tmp;
        head2=tmp2;
    }
    
}
