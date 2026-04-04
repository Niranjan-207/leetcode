// Last updated: 4/4/2026, 10:58:16 PM
class Solution {
public:
    long long maximumScore(vector<int>& nums, string s) {
        
        // long long cnt=0;
        long long n=nums.size();
        // for(char c:s){
        //         if(c=='1') cnt++;
        // }
        // if(cnt==n) return accumulate(nums.begin(),nums.end(),0);
        // if(cnt==0) return 0;
        // if(s[n-1]!='1'){
        //     sort(nums.begin(),nums.end());
        //     return accumulate(nums.begin(),nums.begin()+(n-1),0);
        // }else{
        //     score+=nums[n-1];
        //     nums.pop_back();
            
        // }
        long long score=0;
        priority_queue<int> pq;
        bool zero=false;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                zero=true;
                pq.push(nums[i]);
            }else{
                if(!zero){
                    score+=nums[i];
                }else{
                    pq.push(nums[i]);
                    score+=pq.top();
                    pq.pop();
                }
            }
        }
        return score;
    }
};