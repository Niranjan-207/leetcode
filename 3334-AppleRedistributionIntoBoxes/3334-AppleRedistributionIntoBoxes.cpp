// Last updated: 4/4/2026, 11:00:02 PM
class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int total=accumulate(apple.begin(),apple.end(),0);
        int cnt=0;
        int sum=0;
        sort(capacity.rbegin(),capacity.rend());
        for(int& num:capacity){
            
            if(sum<=total){
                cnt++;
                sum+=num;
                if(sum==total){
                    break;
                }
            }else{
                break;
            }
        }
        return cnt;
    }
};