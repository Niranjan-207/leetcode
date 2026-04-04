// Last updated: 4/4/2026, 11:03:46 PM
class MyHashMap {
public:
    int size=10007;
    int hash(int key){
        return (key%size);
    }
    vector<list<pair<int,int>>> hm;
    MyHashMap(): hm(size){
        
    }
    
    void put(int key, int value) {
        int idx=hash(key);
        for(auto& p:hm[idx]){
            if(p.first==key){
                p.second=value;
                return;
            }
        }
        hm[idx].push_back({key,value});
    }
    
    int get(int key) {
        int idx=hash(key);
        for(auto& p:hm[idx]){
            if(p.first==key){
                return p.second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        int idx=hash(key);
        for(auto it=hm[idx].begin();it!=hm[idx].end();it++){
            if(it->first==key){
                hm[idx].erase(it);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */