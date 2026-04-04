// Last updated: 4/4/2026, 11:06:30 PM
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
    void reorderList(ListNode* head) {
        if (!head || !head->next || !head->next->next) return;
        ListNode* fast=head;
        ListNode* slow=head;

        while(fast!= nullptr && fast->next != nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        ListNode* pre=nullptr;
        ListNode* cur=slow->next;
        while(cur!=nullptr){
            ListNode* temp=cur->next;
            cur->next=pre;
            pre=cur;
            cur=temp;
        }
        slow->next=cur;

        ListNode* first = head;
        ListNode* second = pre;
        while (second != nullptr) {
            ListNode* temp1 = first->next;
            ListNode* temp2 = second->next;

            first->next = second;
            second->next = temp1;

            first = temp1;
            second = temp2;
        }
        

        
    }
};