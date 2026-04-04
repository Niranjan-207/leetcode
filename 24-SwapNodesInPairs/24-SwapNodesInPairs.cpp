// Last updated: 4/4/2026, 11:07:50 PM
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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        ListNode* new_head=head->next;
        ListNode* pre=head;
        ListNode* cur=head->next;

        ListNode* Next;
        while(true){
            Next=cur->next;

            cur->next=pre;
            if(Next == nullptr || Next->next==nullptr){
                pre->next=Next;
                break;
            }
            pre->next=Next->next;
            pre=Next;
            cur=Next->next;
        }
        return new_head;
    }
};