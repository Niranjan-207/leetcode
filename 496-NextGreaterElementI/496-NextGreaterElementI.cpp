// Last updated: 4/4/2026, 11:04:38 PM
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        vector<int> ng(n);
        stack<int> s;
        
        for(int i=n-1;i>=0;i--){

            while(!s.empty() && nums2[i] >= s.top()) s.pop();

            if(s.empty()) ng[i]=-1;
            else    ng[i]=s.top();

            s.push(nums2[i]); 
        }

        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums2[i]]=ng[i];
        }

        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            ans.push_back(mp[nums1[i]]);
        }
        return ans;
    }
};