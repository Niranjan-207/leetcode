// Last updated: 4/4/2026, 11:02:49 PM
class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        long long sum=0;
        for(int num:nums){
            if(num<=5)  continue;
            int cnt=0;
            long long temp=0;
            for(int i=1;i*i<=num;i++){
                if(i*i==num){
                    temp+=i;
                    cnt++;
                }else if(num%i==0){
                    temp+=(i);
                    temp+=(num/i);
                    cnt+=2;
                }
                if(cnt>4)   break;
            }
            if(cnt==4) sum+=temp;
        }
        return sum;
    }
};