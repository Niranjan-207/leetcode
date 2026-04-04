// Last updated: 4/4/2026, 10:59:56 PM
class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        int count=0;
        for(int num:hours){
            count++;
        }
        int ans=0;
        for(int i=0;i<count;i++){
            for(int j=i;j<count;j++){
                if(((hours[i]+hours[j])%24)==0 && i!=j ){
                    ans++;
                }
            }

        }
        return ans;
    }
};