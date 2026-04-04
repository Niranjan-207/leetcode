// Last updated: 4/4/2026, 10:58:51 PM
class Solution {
public:
    string majorityFrequencyGroup(string s) {
        unordered_map<char,int> mp;
        for(char c: s){
            mp[c]++;
        }
        
        unordered_map<int,vector<char>> group;
        for(auto &a:mp){
            group[a.second].push_back(a.first);
        }

        int bsize=-1,bfreq=-1;
        vector<char> bgroup;
        for(auto& a: group){
            int fre=a.first;
            auto& vec=a.second;
            int size=vec.size();

            if(size>bsize || (size==bsize && fre>bfreq)){
                bsize=size;
                bfreq=fre;
                bgroup=vec;
            }
            
        }
        string ans="";
        for(char c:bgroup){
            ans+=c;
        }
        return ans;
    }
};