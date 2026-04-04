// Last updated: 4/4/2026, 10:59:07 PM
class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> ans;
        for(int i=0;i<order.size();i++){
            for(int j=0;j<friends.size();j++){
                    if(order[i]==friends[j]) ans.push_back(order[i]);
            }
        }
        return ans;
    }
};