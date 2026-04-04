// Last updated: 4/4/2026, 11:06:25 PM
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
    ListNode* sortList(ListNode* head) {
        if(head==nullptr || head->next==nullptr)    return head;


        ListNode* slow=head;
        ListNode* fast=head->next;

        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* mid=slow->next;
        slow->next=nullptr;
        
        ListNode* left=sortList(head);
        ListNode* right=sortList(mid);

        return merge(left,right);
    }

    ListNode* merge(ListNode* a,ListNode* b){

        ListNode dummy(0);
        ListNode* p=&dummy;
        while(a && b){
            if(a->val<b->val){
                p->next=a;
                a=a->next;
                
            }else{
                p->next=b;
                b=b->next;
            }
            p=p->next;
        }
        if(a==nullptr)  p->next=b;
        else    p->next=a;
        return dummy.next;
    }
};
