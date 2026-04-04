// Last updated: 4/4/2026, 11:07:22 PM
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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr || k==0){
            return head;
        }
        int count=0;
        ListNode* p=head;
        while(p->next != nullptr){
            p=p->next;
            count++;
        }
        count+=1;
        p->next=head;
        k = k % count;  
        int stepsToNewHead = count - k;
        ListNode* iterate=head;
        for(int i=1;i<stepsToNewHead;i++){
            iterate=iterate->next;
        }
        head=iterate->next;
        iterate->next=nullptr;

        return head;
    }
};