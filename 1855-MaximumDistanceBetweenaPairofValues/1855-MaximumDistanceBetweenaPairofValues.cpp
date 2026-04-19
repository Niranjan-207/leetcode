// Last updated: 4/20/2026, 12:06:30 AM
1class Solution {
2public:
3    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
4        int ans=0;
5        int n=nums1.size();
6        int m=nums2.size();
7        for(int i=0;i<n;i++){
8
9            int l=i,h=m-1;
10            while(l<=h){
11                int mid=l+(h-l)/2;
12
13                if(nums2[mid]>=nums1[i]){
14                    ans=max(ans,mid-i);
15                    l=mid+1;
16                }else{
17                    h=mid-1;
18                }
19            }
20        }
21        return ans;
22    }
23};