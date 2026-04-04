// Last updated: 4/4/2026, 11:04:31 PM
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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* first=head;
        ListNode* second=head;
        for(int i=1;i<k;i++){
            first=first->next;
        }
        ListNode* temp1=first;

        while(first->next != nullptr){
            second=second->next;
            first=first->next;
        }
        ListNode* temp=new ListNode;
        temp->val=second->val;
        second->val=temp1->val;
        temp1->val=temp->val;

        return head;
    }
};