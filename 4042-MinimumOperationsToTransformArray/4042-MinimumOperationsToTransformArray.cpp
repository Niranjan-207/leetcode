// Last updated: 4/4/2026, 10:58:56 PM
class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2) {
        long long ans=0;

        int n=nums1.size();
        int m=nums2.size();
                int dig=nums2[m-1];
        // int mindif=abs(nums1[0]-nums2[m-1]);
        // for(int i=1;i<n;i++){
        //     int temp=abs(nums1[i]-nums2[m-1]);
        //     if(temp<mindif){
        //         mindif=temp;
        //         dig=nums1[i];
        //     }
        // }

        //nums1.push_back(dig);
        for(int i=0;i<n;i++){
            ans+=(abs(nums1[i]-nums2[i]));
        }
         long long mindif=LLONG_MAX;
         for(int i=0;i<n;i++){
            long long a = nums1[i];
            long long b = nums2[i];
            long long c = dig;
            long long mcst = 1 + (max({a, b, c}) -min({a, b, c}));
            long long ocst = abs(a - b);
            long long temp = mcst - ocst;
            
             mindif=min(mindif,temp);
        }
        ans+=mindif;
        
        return ans;
    }
};