// Last updated: 4/4/2026, 11:06:10 PM
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> arr;
        for(int& num:nums){
            arr.push_back(to_string(num));
        }
        sort(arr.begin(),arr.end(),[](string a,string b){
            return a+b > b+a;
        });
        if(arr[0]=="0") return "0";
        string ans="";
        for(string s:arr){
            ans+=s;
        }
        return ans;
    }
};
// 30 34
// 3430 3034