// Last updated: 4/4/2026, 10:57:38 PM
class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long> st;
        for(int num:nums){
            st.push_back(num);
            while(st.size()>=2){
                int n=st.size();
                if(st[n-1]==st[n-2]){
                    long long temp=st[n-1]+st[n-2];
                    st.pop_back();
                    st.pop_back();
                    st.push_back(temp);
                }else{
                    break;
                }
            }
        }
        return st;
    }

};