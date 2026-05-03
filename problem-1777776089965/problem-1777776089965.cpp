// Last updated: 5/3/2026, 8:11:29 AM
1class Solution {
2public:
3    bool prime(int num){
4        if(num<=1) return false;
5        for(int i=2;i<num;i++){
6            if(num%i==0) return false;
7        }
8        return true;
9    }
10    
11    int sumOfPrimesInRange(int n) {
12        int rev=0;
13        int temp=n;
14        while(temp>0){
15            int dig=temp%10;
16            rev=(rev*10)+dig;
17            temp/=10;
18        }
19        int l=min(rev,n);
20        int h=max(rev,n);
21        int cnt=0;
22        for(int i=l;i<=h;i++){
23            if(prime(i)) cnt+=i;
24        }
25        return cnt;
26    }
27};