// Last updated: 6/30/2026, 11:07:36 AM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* reverseList(ListNode* head) {
14        if(!head || !head->next)    return head;
15
16        ListNode* p=nullptr;
17        ListNode* cur=head;
18        ListNode* n=nullptr;
19
20        while(cur!=nullptr){
21            n=cur->next;
22            cur->next=p;
23            p=cur;
24            cur=n;
25        }
26        return p;
27    }
28};