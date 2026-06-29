// Last updated: 6/30/2026, 1:24:13 AM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    bool hasCycle(ListNode *head) {
12        ListNode* s=head;
13        ListNode* f=head;
14
15        while(f && f->next){
16            s=s->next;
17            f=f->next->next;
18            if(s==f)    return true;
19        }
20        return false;
21
22    }
23};