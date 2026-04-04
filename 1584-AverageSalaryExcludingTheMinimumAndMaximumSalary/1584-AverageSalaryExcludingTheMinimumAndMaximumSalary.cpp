// Last updated: 4/4/2026, 11:02:02 PM
class Solution {
public:
    double average(vector<int>& salary) {
        long long s=accumulate(salary.begin(),salary.end(),0);
        s=s-(*min_element(salary.begin(),salary.end()));
        s=s-(*max_element(salary.begin(),salary.end()));
        return (double)s/(salary.size()-2);
    }
};