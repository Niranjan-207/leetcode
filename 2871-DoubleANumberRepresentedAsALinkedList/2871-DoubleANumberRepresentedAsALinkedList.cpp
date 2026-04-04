// Last updated: 4/4/2026, 11:00:23 PM
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

    ListNode* reverse(ListNode* head){
        ListNode* prev=nullptr;
        ListNode* curr=head;
        ListNode* nex=nullptr;
        while(curr!=nullptr){
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
        return prev;
    }

    ListNode* doubleIt(ListNode* head) {
        head=reverse(head);

        ListNode* p=head;
        int sum=0,carr=0;
        ListNode* pPrev=nullptr;
        while(p!=nullptr){
            int mul=((p->val)*2)+carr;
            carr=mul/10;
            p->val=mul%10;
            pPrev=p;
            p=p->next;
        }
        if(carr!=0){
            ListNode* temp=new ListNode(carr);
            pPrev->next=temp;
        }
        return reverse(head);
    }
};