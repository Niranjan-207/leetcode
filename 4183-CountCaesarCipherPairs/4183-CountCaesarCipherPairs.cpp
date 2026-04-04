// Last updated: 4/4/2026, 10:57:47 PM
class Solution {
public:
    long long hashWord(string s,int dif){
        long long hash=0;
        long long p=31;
        long long mod=1e9+7;
        long long power=1;
        
        for(char c:s){
            char ch=((c-dif+26)%26);
            hash=(hash+(ch-'a'+1)*power)%mod;
            power=(power*p)%mod;
        }
        return hash;
    }
    long long countPairs(vector<string>& words) {
        unordered_map<long long,long long> mp;
        for(string& s:words){
            long long dif=s[0]-'a'+1;
            long long hash=hashWord(s,dif);
            mp[hash]++;
        }
        long long cnt=0;
        for(auto& [a,b]:mp){
            if(b>1) cnt+=(b*(b-1))/2;
        }
        return cnt;
    }
};