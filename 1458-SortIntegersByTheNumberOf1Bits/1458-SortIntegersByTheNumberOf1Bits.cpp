// Last updated: 4/4/2026, 11:02:27 PM
class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> ab;
        for(int num:arr){
            int temp=num;
            int cnt=0;
            while(temp>0){
                if(temp&1)   cnt++;
                temp>>=1;
            }
            ab.push_back({cnt,num});
        }
        sort(begin(ab),end(ab));
        vector<int> ans;
        for(auto& [cnt,num]:ab){
            ans.push_back(num);
        }
        return ans;
    }
};