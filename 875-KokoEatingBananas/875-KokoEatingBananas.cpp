// Last updated: 6/30/2026, 11:20:13 AM
1class Solution {
2public:
3    bool can(vector<int>& piles,int h,int mid){
4        int k=0;
5        for(int num:piles){
6            k+=(num/mid);
7            if((num%mid)!=0)    k++;
8        }
9        return k<=h;
10    }
11
12    int minEatingSpeed(vector<int>& piles, int h) {
13        int l=1,hi=*max_element(begin(piles),end(piles));
14
15        while(l<hi){
16            int mid=l+(hi-l)/2;
17            if(can(piles,h,mid)){
18                hi=mid;
19            }else{
20                l=mid+1;
21            }
22        }
23        return l;
24
25
26    }
27};