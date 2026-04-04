// Last updated: 4/4/2026, 11:03:30 PM
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int cnt=0,n=people.size();
        sort(people.begin(),people.end());
        int l=0,r=n-1;
        while(l<=r){
            if(people[l]+people[r]<=limit)  l++;
            r--;
            cnt++;
        }
        return cnt;
    }
};