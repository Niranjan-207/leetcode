// Last updated: 4/4/2026, 10:58:44 PM
class Solution {
public:
    tuple<int,int,int> getfac(long long num){
        int a=0,b=0,c=0;
        while(num%2==0){a++;num/=2;}
        while(num%3==0){b++;num/=3;}
        while(num%5==0){c++;num/=5;}

        return {a,b,c};
    }
    
    int countSequences(vector<int>& nums, long long k) {
        long long temp=k;
        while(temp%2==0){temp/=2;}
        while(temp%3==0){temp/=3;}
        while(temp%5==0){temp/=5;}
        if(temp!=1) return 0;
        
        unordered_map<string,long long> dp;
        dp["0#0#0"]=1;

        for(int num:nums){
            auto [ca,cb,cc]=getfac(num);
            unordered_map<string,long long> ndp;
            
            
            for(auto& [key,ways]:dp){
                int a,b,c;
                sscanf(key.c_str(),"%d#%d#%d",&a,&b,&c);
                
                //skip
                ndp[key]+=ways;

                //multiply
                string mkey=to_string(a+ca)+"#"+to_string(b+cb)+"#"+to_string(c+cc);
                ndp[mkey]+=ways;

                //divide
                string dkey=to_string(a-ca)+"#"+to_string(b-cb)+"#"+to_string(c-cc);
                ndp[dkey]+=ways;
            }

            swap(dp,ndp);
        }

        auto [ka,kb,kc]=getfac(k);
        string kstr=to_string(ka)+"#"+to_string(kb)+"#"+to_string(kc);
        return dp.count(kstr)?dp[kstr]:0;
    }
};