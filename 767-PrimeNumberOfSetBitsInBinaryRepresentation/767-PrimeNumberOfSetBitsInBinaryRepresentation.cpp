// Last updated: 4/4/2026, 11:03:52 PM
class Solution {
public:
    int count(int num){
        int cnt=0;
        while(num>0){
            if(num&1)   cnt++;
            num>>=1;
        }
        return cnt;
    }

    int countPrimeSetBits(int left, int right) {
        int ans=0;
        for(int i=left;i<=right;i++){
            int cnt=count(i);
            ans+=((665772>>cnt)&1);
        }
        return ans;
    }
};