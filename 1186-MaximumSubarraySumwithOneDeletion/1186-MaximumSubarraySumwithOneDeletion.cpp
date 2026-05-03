// Last updated: 5/3/2026, 9:22:38 PM
1class Solution {
2public:
3    int maximumSum(vector<int>& arr) {
4        int n=arr.size();
5        vector<int> pre(n),suf(n);
6
7        pre[0]=arr[0];
8        for(int i=1;i<n;i++){
9            pre[i]=max(pre[i-1]+arr[i],arr[i]);
10        }
11
12        suf[n-1]=arr[n-1];
13        for(int i=n-2;i>=0;i--){
14            suf[i]=max(suf[i+1]+arr[i],arr[i]);
15        }
16
17        int res=*max_element(begin(pre),end(pre));
18        for(int i=1;i<n-1;i++){
19            res=max(res,pre[i-1]+suf[i+1]);
20        }
21        return res;
22    }
23};