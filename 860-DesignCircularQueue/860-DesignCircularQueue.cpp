// Last updated: 4/4/2026, 11:03:44 PM
class MyCircularQueue {
public:
    struct Node{
        Node* next;
        int value;
        Node(int val){
            this->value=val;
            next=nullptr;
        }
    };
    Node* front;
    Node* rear;
   
    int curSize,size;
    
    MyCircularQueue(int k) {
        front=rear=nullptr;
        size=k;
        curSize=0;
    }
    
    bool enQueue(int value) {
        if(isFull())    return false;

        Node* node=new Node(value);
        if(isEmpty()){
            rear=front=node;
        }else{
            rear->next=node;
            rear=node;
        }

        curSize++;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty())   return false;
        if(curSize==1){
            delete(front);
            front=rear=nullptr;
        }else{
            Node* temp=front;
            front=front->next;
            delete(temp);
        }
        curSize--;
        return true;
    }
    
    int Front() {
        if(isEmpty())   return -1;
        return front->value;
    }
    
    int Rear() {
        if(isEmpty())   return -1;
        return rear->value;
    }
    
    bool isEmpty() {
        return curSize==0;
    }
    
    bool isFull() {
        return size==curSize;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */