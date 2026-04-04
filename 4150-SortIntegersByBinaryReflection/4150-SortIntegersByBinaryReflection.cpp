// Last updated: 4/4/2026, 10:58:06 PM
class Solution {
public:
    int convert(int num){
        if(num==0) return 0;
       
        int ans=0;
        //long long mul=1;
        while(num>0){
            // if(num&1){
            //     ans=ans+mul;
            // }
            // mul*=2;
            ans=(ans<<1) | (num&1);
            num>>=1;
        }


        
        // string s=bitset<32>(num).to_string();
        // int f1=s.find('1');
        //  if(f1==string::npos)
        //         return "0";
        // s=s.substr(f1);
        // reverse(s.begin(),s.end());

        // int f2=s.find('1');
        // if(f2==string::npos)
        //         return "0";
        // s=s.substr(f2);
      
        return ans;
    }
    
    vector<int> sortByReflection(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        vector<pair<int,int>> arr(n);
        int i=0;
        for(int num:nums){
            int s=convert(num);
            arr[i++]={s,num};
        }
        // sort(arr.begin(),arr.end(),[&](auto &a,auto &b){
        //     if(a.first.length()!=b.first.length())
        //         return a.first.length()<b.first.length();
        //     if(a.first!=b.first)
        //         return a.first<b.first;
        //     return a.second<b.second;
        // });
        sort(arr.begin(),arr.end());
        for(auto [a,b]:arr){
            ans.push_back(b);
        }
        return ans;
    }
};