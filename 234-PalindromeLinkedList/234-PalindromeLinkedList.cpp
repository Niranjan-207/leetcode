// Last updated: 4/4/2026, 11:05:37 PM
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
    bool isPalindrome(ListNode* head) {
        if(head== nullptr || head->next==nullptr){
            return true;
        }
        
        ListNode* fast=head;
        ListNode* slow=head;
        
        while(fast != nullptr && fast->next != nullptr){
            slow=slow->next;
            fast=fast->next->next;  
        }
        
        ListNode* pre=nullptr;
        ListNode* current=slow;
        while(current!= nullptr){
            ListNode* Next=current->next;
            current->next=pre;
            pre=current;
            current=Next;
        }

        fast=pre;
        slow=head;
        while(fast != nullptr){
            if(fast->val != slow->val){
                return false;
            }slow=slow->next;
            fast=fast->next;
        }
        return true;

    }
};