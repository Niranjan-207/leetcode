// Last updated: 4/4/2026, 11:07:53 PM
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* f=list1;
        ListNode* s=list2;
        if(f==nullptr && s==nullptr){
            return nullptr;
        }else if(f== nullptr){
            return s;
        }else if(s==nullptr){
            return f;
        }

        ListNode dummy;
        ListNode* tail=&dummy;
        while(f!=nullptr && s!=nullptr){
            if(f->val<=s->val){
                
                tail->next=f;
                f=f->next;
                
            }else{
                
                tail->next=s;
                s=s->next;
            }
            tail=tail->next;
            
           
        }
        if(f!=nullptr){
            tail->next=f;
            
        }
        if(s!=nullptr){
            tail->next=s;
            
        }
        return dummy.next;
    }
};