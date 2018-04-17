//
//  global.h
//  LeetCode_02
//
//  Created by wb on 2018/1/13.
//  Copyright © 2018年 wb. All rights reserved.
//

#ifndef global_h
#define global_h

#include <stdio.h>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <iostream>
#include <math.h>
#include <stack>
#include <queue>
#include <unordered_map>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x): val(x), left(NULL), right(NULL){}
};

struct TreeLinkNode
{
    int val;
    TreeLinkNode *left, *right, *next;
    TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
};
struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};


template <class T>
void quick_sort(T arrary[],int l,int r)
{
    if(l>=r)
    {
        return ;
    }
    T   key=arrary[l];
    int left=l;
    int right=r;
    while(left<right)
    {
        while(arrary[right]>key&&left<right)
        {
            right--;
        }
        arrary[left]=arrary[right];
        while(arrary[left]<key&&left<right)
        {
            left++;
        }
        arrary[right]=arrary[left];
    }
    
    arrary[left]=key;
    quick_sort(arrary, l, left-1);
    quick_sort(arrary, left+1, r);
}

template <class T>
void vector_display(const vector<T> n)
{
    for(size_t i=0;i<n.size();i++)
    {
        cout<<n[i]<<" ";
    }
    cout<<endl;
}

static ListNode *generateListNode(vector<int> n)
{
    ListNode *prehead=new ListNode(0);
    ListNode *head=new ListNode(n[0]);
    prehead->next=head;
    for(size_t i=1;i<n.size();i++)
    {
        head->next=new ListNode(n[i]);
        head=head->next;
    }
    return prehead->next;
}

static void ListNode_display(ListNode *l)
{
    ListNode *helper=l;
    
    while(helper!=NULL)
    {
        cout<<(helper->val)<<" ";
        helper=helper->next;
    }
    cout<<endl;
    
}

#endif /* global_h */
