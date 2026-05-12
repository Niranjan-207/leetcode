// Last updated: 5/12/2026, 10:56:24 PM
1class Solution {
2public:
3    int minimumSum(int num) {
4        vector<int> arr;
5        while(num>0){
6            int dig=num%10;
7            arr.push_back(dig);
8            num/=10;
9        }
10        sort(begin(arr),end(arr));
11        int num1=arr[0]*10 + arr[3];
12        int num2=arr[1]*10 +arr[2];
13        return num1+num2;
14    }
15};