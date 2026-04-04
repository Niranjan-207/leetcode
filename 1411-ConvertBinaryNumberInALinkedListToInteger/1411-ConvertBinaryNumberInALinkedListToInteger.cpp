// Last updated: 4/4/2026, 11:02:35 PM
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
    int getDecimalValue(ListNode* head) {
        int dv[30];
        ListNode* p=head;
        int i=0;
        int sum=0;
        int base=1;
        while(p != nullptr){
            dv[i]=p->val;
            p=p->next;
            i++;
        }
        i--;
        while(i>=0){
            sum=sum+(dv[i]*base);
            base*=2;
            i--;
        }
        return sum;
    }
};