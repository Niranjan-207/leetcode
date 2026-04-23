// Last updated: 4/23/2026, 11:33:46 PM
1class Solution {
2public:
3    vector<int> findDuplicates(vector<int>& nums) {
4        // int n=nums.size();
5        // for(int i=0;i<n;i++){
6        //     int num=nums[i]-1;
7        //     if(num<1)   continue;
8        //     int idx=i;
9        //     while(num != idx){
10        //         int nnum=nums[idx]-1;
11        //         if(nums[num]>0){
12        //             nums[num]=-1;
13        //         }else{
14        //             nums[num]-=1;
15        //         }
16        //         //nums[num]-=1;
17        //         num=nnum;
18        //         idx=num;
19        //     }
20        // }
21        
22        // for(int num:nums)   cout<<num<<" ";
23        // vector<int> ans;
24        // for(int i=0;i<n;i++){
25        //     if(nums[i]==-2)  ans.push_back(i+1);
26        // }
27        // return ans;
28        int i = 0, n = nums.size();
29
30        while (i < n) {
31            int correct = nums[i] - 1;
32
33            if (nums[i] != nums[correct])
34                swap(nums[i], nums[correct]);
35            else
36                i++;
37        }
38
39        vector<int> ans;
40
41        for (int i = 0; i < n; i++) {
42            if (nums[i] != i + 1)
43                ans.push_back(nums[i]);
44        }
45
46        return ans;
47    }
48};