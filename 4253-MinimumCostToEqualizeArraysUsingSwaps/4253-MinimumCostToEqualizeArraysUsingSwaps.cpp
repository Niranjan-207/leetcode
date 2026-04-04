// Last updated: 4/4/2026, 10:57:18 PM
class Solution {
public:
    int minCost(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> n1c,tc;
        for(int num:nums1){ n1c[num]++;tc[num]++;}
        for(int num:nums2) tc[num]++;
        int n=nums1.size();
        
       //vector<int> ans;
        int cnt=0;
        
        for(auto& [num,fre]:tc){
            if(fre%2!=0) return -1;
            
            int req=fre/2;
            int cur=n1c[num];
            if(cur>req){
                cnt+=(cur-req);
                // for(int i=0;i<(cur-req);i++){
                    
                //     ans.push_back(num);
                // }
            }
        }
        return cnt;
        
    }
};