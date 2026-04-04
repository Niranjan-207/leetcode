// Last updated: 4/4/2026, 11:05:55 PM
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
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        ListNode* f=nullptr;
        ListNode* s=head;
        
        while(s!=nullptr){
            ListNode* t=s->next;
            s->next=f;
            f=s;
            s=t;
        }

        return f;
        
    }
};