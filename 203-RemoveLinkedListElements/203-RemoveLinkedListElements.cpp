// Last updated: 4/4/2026, 11:05:57 PM
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
    ListNode* removeElements(ListNode* head, int val) {
        while (head != nullptr && head->val == val) {
            head = head->next;
        }
        if(head==nullptr){
            return nullptr;
        }
        ListNode* p=head;
        
        while(p!=nullptr &&p->next != nullptr ){
            if(p->next->val==val){
                if(p->next->next != nullptr){
                    p->next=p->next->next;
                }else{
                    p->next=nullptr;
                }
            }else{
                p=p->next;
            }

        }
        return head;
    }
};