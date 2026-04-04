// Last updated: 4/4/2026, 11:01:07 PM
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
    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }
        if(head->next->next==0){
            head->next=nullptr;
            return head;
        }
        ListNode* slow=head;
        ListNode* fast=head;
       //while(fast!=nullptr && fast->next != nullptr){
        do{
            slow=slow->next;
            fast=fast->next->next;
        }while(fast!=nullptr && fast->next != nullptr);

        slow->val=slow->next->val;
        slow->next=slow->next->next;
        return head;
    }    
    
};