// Last updated: 4/4/2026, 11:03:48 PM
class MyHashSet {
public:
    int size=10007;
    int hash(int key){
        return (key%size);
    } 
    vector<list<int>> hs;
    MyHashSet(): hs(size){
        
    }
    
    void add(int key) {
        int idx=hash(key);
        for(int num:hs[idx]){
            if(num==key)    return;
        }
        hs[idx].push_back(key);
    }
    
    void remove(int key) {
        int idx=hash(key);
        hs[idx].remove(key);
    }
    
    bool contains(int key) {
        int idx=hash(key);
        for(int num:hs[idx]){
            if(num==key)    return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */