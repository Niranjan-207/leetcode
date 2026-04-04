// Last updated: 4/4/2026, 11:06:33 PM
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        Node* p=head;
        while(p!=NULL){
            Node* newNode=new Node(p->val);
            Node* temp=p->next;
            p->next=newNode;
            newNode->next=temp;
            p=p->next->next;
        }
        p=head;
        while(p!=NULL){
            if(p->random)
                p->next->random=p->random->next;
            p=p->next->next;
        }


        Node* dummy=new Node(-1);
        Node* copy=dummy;
        p=head;
        while(p){
            copy->next=p->next;
            p->next=p->next->next;
            p=p->next;
            copy=copy->next;
        }
        return dummy->next;
    }
};