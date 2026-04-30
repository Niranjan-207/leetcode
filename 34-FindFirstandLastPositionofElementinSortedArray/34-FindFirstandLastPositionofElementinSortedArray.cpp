// Last updated: 4/30/2026, 3:40:57 PM
1class Solution {
2public:
3    int bsl(vector<int>& arr,int k){
4        int l=0;
5        int r=arr.size()-1;
6        int idx=-1;
7        while(l<=r){
8            int mid=l+(r-l)/2;
9            if(arr[mid]==k){
10                idx=mid;
11                r=mid-1;
12            }else if(k<arr[mid]){
13                r=mid-1;
14            }else{
15                l=mid+1;
16            }
17        }
18        return idx;
19    }
20
21    int bsr(vector<int>& arr,int k){
22        int l=0;
23        int r=arr.size()-1;
24        int idx=-1;
25        while(l<=r){
26            int mid=l+(r-l)/2;
27            if(arr[mid]==k){
28                idx=mid;
29                l=mid+1;
30            }else if(k<arr[mid]){
31                r=mid-1;
32            }else{
33                l=mid+1;
34            }
35        }
36        return idx;
37    }
38
39    vector<int> searchRange(vector<int>& nums, int target) {
40        vector<int> ans;
41        ans.push_back(bsl(nums,target));
42        ans.push_back(bsr(nums,target));
43        return ans;
44    }
45};