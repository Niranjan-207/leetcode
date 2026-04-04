// Last updated: 4/4/2026, 11:00:36 PM
class Solution {
public:
    vector<vector<string>> mostPopularCreator(vector<string>& creators, vector<string>& ids, vector<int>& views) {
        map<string,vector<long long>> mp;
        int n=creators.size();
        // total,best-idx

        for(int i=0;i<n;i++){
            string cr=creators[i];
            if(mp.find(cr)==mp.end()){
                mp[cr]={views[i],i};
            }else{
                mp[cr][0]+=views[i];
                int bid=mp[cr][1];
                if(views[bid]<views[i] ||
                    (views[i]==views[bid] && ids[i] <ids[bid])){
                    mp[cr][1]=i;
                }
            }
        }

        long long fam=0;
        for(auto &c:mp){
            fam=max(fam,(long long)c.second[0]);
        }

        vector<vector<string>> ans;
        for(auto &c:mp){
            if(c.second[0]==fam){
                ans.push_back({c.first,ids[c.second[1]]});
            }
        }
        return ans;

    }
};