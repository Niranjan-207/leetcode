// Last updated: 6/28/2026, 7:55:59 AM
1class Solution {
2public:
3    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
4        // set<int> se(begin(arr),end(arr));
5        // return se.size();
6        sort(begin(arr),end(arr));
7
8        int pre=1;
9        for(int i=1;i<arr.size();i++){
10            if(arr[i]==pre) continue;
11            else{
12                pre++;
13            }
14        }
15        return pre;
16    }
17};