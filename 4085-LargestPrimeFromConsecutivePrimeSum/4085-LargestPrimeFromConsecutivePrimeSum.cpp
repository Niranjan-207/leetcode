// Last updated: 4/4/2026, 10:58:33 PM
class Solution {
public:
    int largestPrime(int n) {
        if(n<0) return 0;

        vector<bool> prime(n+1,true);
        prime[0]=false;
        prime[1]=false;

        for(int i=2;1ll*i*i<=n;i++){
            if(prime[i]){
                for(int j=i+i;j<=n;j+=i)
                    prime[j]=false;
            }
        }
        vector<int> valid;
        for(int i=2;i<=n;i++){
            if(prime[i]) valid.push_back(i);
        }

        int ans=0;
        long long sum=0;
        for(int p:valid){
            sum+=p;
            if(sum>n) break;
            if(prime[(int)sum]) ans=sum;
        }

        return ans;
    }
};