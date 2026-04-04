// Last updated: 4/4/2026, 11:00:54 PM
class Solution {
public:
    long long gcd(long long a,long long b){
        if(a==0)    return b;

        return gcd(b%a,a);
    }

    long long lcm(long long a,long long b){
        long long temp=gcd(a,b);
        return (a*b)/temp;
    }

    vector<int> replaceNonCoprimes(vector<int>& nums) {
        stack<long long> s;

        for(int num:nums){
            // if(s.empty())   s.push(num);
            // else{
            //     long long up=s.top();
            //     if(gcd(num,up)>1){
            //         s.pop();
            //         s.push(lcm(num,up));
            //     }else{
            //         s.push(num);
            //     }
            // }
            long long cur=num;
            while(!s.empty() && gcd(s.top(),cur)>1){
                cur=lcm(s.top(),cur);
                s.pop();
            }
            s.push(cur);
        }

        vector<int> ans;
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

