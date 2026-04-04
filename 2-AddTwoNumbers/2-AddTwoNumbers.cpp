// Last updated: 4/4/2026, 11:08:07 PM
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* head=new ListNode;
        ListNode* tail=head;
        int carry =0;

        while(l1!=nullptr || l2!=nullptr || carry!=0){
           

            int digit1 = (l1==nullptr)?0:l1->val;
            int digit2 = (l2==nullptr)?0:l2->val;

            
            
            int sum=digit1+digit2+carry;
             carry=sum/10;
            int digit=sum%10;
            
            ListNode* link=new ListNode(digit);
            tail->next=link;
            tail=tail->next;

            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;

        }
        

        return head->next;
    }
};