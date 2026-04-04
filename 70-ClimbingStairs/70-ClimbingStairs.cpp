// Last updated: 4/4/2026, 11:07:14 PM
class Solution {
public:
    
    
    int solve(vector<int>& arr,int n){
        if(n<=2)    return n;
        if(arr[n]==-1)
            arr[n]=solve(arr,n-1)+solve(arr,n-2);

        return arr[n];
    }

    int climbStairs(int n) {
        if(n<=2)    return n;
        vector<int> arr(n+1,-1);
        return solve(arr,n);
    }
};