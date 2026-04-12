// Last updated: 4/12/2026, 8:16:16 AM
1class Solution {
2public:
3    double PI=acos(-1);
4    vector<double> internalAngles(vector<int>& sides) {
5        
6        int a=sides[0],b=sides[1],c=sides[2];
7        if((a+b<=c || b+c<=a || c+a<=b)) return {};
8
9
10        double cosC=(a*a + b*b -c*c)/(2.0*a*b);
11        double C=acos(cosC)*(180/PI);
12
13        double cosA=(c*c + b*b -a*a)/(2.0*c*b);
14        double A=acos(cosA)*(180/PI);
15
16        double cosB=(a*a + c*c -b*b)/(2.0*a*c);
17        double B=acos(cosB)*(180/PI);
18
19        vector<double> ans;
20        ans.push_back(A);
21        ans.push_back(B);
22        ans.push_back(C);
23        sort(begin(ans),end(ans));
24        return ans;
25    }
26};