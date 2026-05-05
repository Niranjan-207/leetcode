// Last updated: 5/5/2026, 10:31:21 AM
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
13    ListNode* rotateRight(ListNode* head, int k) {
14        if(!head || head->next==nullptr)   return head;
15        int len=0;
16        ListNode* p=head;
17        ListNode* last=head;
18        while(p!=nullptr){
19            p=p->next;
20            len++;
21            if(last->next!=nullptr) last=last->next;
22        }
23        k=k%len;
24        if(k==0)    return head;
25        ListNode* nlast=head;
26        for(int i=1;i<(len-k);i++){
27            nlast=nlast->next;
28            //cout<<nlast->val<<" ";
29        }
30        ListNode* nhead=nlast->next;
31        nlast->next=nullptr;
32        last->next=head;
33
34        return nhead;
35    }
36};