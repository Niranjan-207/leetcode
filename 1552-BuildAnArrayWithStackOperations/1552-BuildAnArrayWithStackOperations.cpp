// Last updated: 4/4/2026, 11:02:12 PM
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int j=0;
        for(int i=1;i<=n;i++){
            if(target[j]==i){
                j++;
                ans.push_back("Push");
            }else{
                ans.push_back("Push");
                ans.push_back("Pop");
            }
            if(j==target.size())    break;
        }
        return ans;
    }
};