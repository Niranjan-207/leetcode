// Last updated: 4/4/2026, 11:00:20 PM
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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==nullptr || head->next==nullptr)    return head;
        ListNode* p=head;
        while(p!=nullptr && p->next!=nullptr){
            int val=gcd(p->val,p->next->val);
            ListNode* temp=new ListNode(val);
            temp->next=p->next;
            p->next=temp;
            p=temp->next;
        }
        return head;
    }
};