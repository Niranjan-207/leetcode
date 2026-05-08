// Last updated: 5/8/2026, 8:05:57 PM
1class Solution {
2public:
3    int candy(vector<int>& ratings) {
4        int n=ratings.size();
5        vector<int> arr(n,1);
6
7        for(int i=1;i<n;i++){
8            if(ratings[i]>ratings[i-1]){
9                arr[i]=arr[i-1]+1;
10            }
11        }
12
13        for(int i=n-2;i>=0;i--){
14            if(ratings[i]>ratings[i+1]){
15                arr[i]=max(arr[i],arr[i+1]+1);
16            }
17        }
18        return accumulate(begin(arr),end(arr),0);
19    }
20};