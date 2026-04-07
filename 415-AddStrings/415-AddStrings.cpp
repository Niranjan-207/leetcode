// Last updated: 4/7/2026, 10:48:36 PM
1class Solution {
2public:
3    string addStrings(string num1, string num2) {
4        int n=num1.length()-1,m=num2.length()-1;
5        int carry=0;
6        string res="";
7        while(n>=0 || m>=0){
8            int sum=carry;
9            if(n>=0)    sum+=(num1[n]-'0');
10            if(m>=0)    sum+=(num2[m]-'0');
11            res+=(sum%10 + '0');
12            carry=sum/10;
13            n--;m--;
14        }
15        if(carry)    res+=(carry+'0');
16        reverse(res.begin(),res.end());
17        return res;
18
19    }
20};