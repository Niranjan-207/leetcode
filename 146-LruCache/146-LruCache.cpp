// Last updated: 4/4/2026, 11:06:26 PM
class LRUCache {
public:
    struct Node{
        Node* next;
        int key,value;

        Node(int key,int value){
            this->key=key;
            this->value=value;
            next=nullptr;
        }
    };

    unordered_map<int,Node*> cache;
    Node* oldest=new Node(0,0);
    Node* tail=oldest;
    int size=0;

    LRUCache(int capacity) {
        size=capacity;
    }
    
    int get(int key) {
        if(cache.find(key)==cache.end())    return -1;

        moveToTail(key);
        return tail->value;
    }
    
    void put(int key, int value) {
        if(cache.count(key)){
            moveToTail(key);
            tail->value=value;
            return;
        }

        if(cache.size()==size){
            Node* lru=oldest->next;
            detach(oldest);
            cache.erase(lru->key);
            delete(lru);

            if(oldest->next==nullptr)   tail=oldest;
        }
        Node* node=new Node(key,value);
        attach(node);
    }

    void detach(Node* node){
        Node* cur=node->next;
        node->next=cur->next;
        if(cur->next)
            cache[cur->next->key]=node;
        cur->next=nullptr;
    }

    void attach(Node* node){
        tail->next=node;
        cache[node->key]=tail;
        tail=tail->next;
    }

    void moveToTail(int key){
        Node* p=cache[key];
        Node* cur=p->next;
        if(cur==tail)   return;
        detach(p);
        attach(cur);
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */