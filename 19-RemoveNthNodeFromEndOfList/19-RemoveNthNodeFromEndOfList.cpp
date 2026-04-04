// Last updated: 4/4/2026, 11:07:55 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr)   return nullptr;
        int cnt=0;
        ListNode* p=head;
        while(p!=nullptr){
            p=p->next;
            cnt++;
        }
        if(cnt==1 ) return nullptr;
        p=head;
        if(cnt-n ==0)   head=head->next;
        for(int i=0;i<(cnt-n-1);i++){
            p=p->next;
        }
        p->next=p->next->next;
        return head;
    }
};