// Last updated: 4/4/2026, 11:04:08 PM
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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans(k,nullptr);
        int cnt=0;
        ListNode* p=head;
        while(p!=nullptr){
            cnt++;
            p=p->next;
        }
        int rem=cnt%k;
        int ele=cnt/k;
        p=head;
        

        for(int i=0;i<k && p;i++){
            int num=ele+(rem>0?1:0);
            rem--;

            ans[i]=p;
            for(int j=1;j<num;j++){
                if(p) p=p->next;
            }

            if(p){
                ListNode* temp=p->next;
                p->next=nullptr;
                p=temp;
            }
        }
        
        return ans;
    }
};