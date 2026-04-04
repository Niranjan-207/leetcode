// Last updated: 4/4/2026, 11:01:48 PM
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
 static const int fast_io = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* p1=list1;
        ListNode* p2=list1;
        for(int i=1;i<a;i++){
            p1=p1->next;
            p2=p2->next;
        }
        for(int i=0;i<=(b-a)+1;i++){
            p2=p2->next;
        }
        p1->next=list2;

        ListNode* p2end=list2;
        while(p2end->next!=nullptr){
            p2end=p2end->next;
        }
        p2end->next=p2;
        return list1;
    }
};