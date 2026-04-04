// Last updated: 4/4/2026, 11:03:12 PM
class TimeMap {
public:
    unordered_map<string,vector<pair<int,string>>> mp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].emplace_back(timestamp,value);
    }
    
    string get(string key, int timestamp) {
        if(!mp.count(key))  return "";
        auto& temp=mp[key];
        int l=0;
        int r=temp.size()-1;
        string ans="";
        while(l<=r){
            int mid=(l+r)/2;
            if(temp[mid].first==timestamp)  return temp[mid].second;
            else if(temp[mid].first<=timestamp){
                ans=temp[mid].second;
                l=mid+1;
            }else   r=mid-1;
        }
        return ans;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */