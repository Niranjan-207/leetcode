// Last updated: 4/4/2026, 10:58:27 PM
class Solution {
public:
    string convert(int num){
        string s=bitset<32>(num).to_string();
        return s.substr(s.find('1'));
    }

    bool checkB(int num){
        string s=convert(num);
        int l=0;
        int r=s.length()-1;
        while(l<r){
            if(s[l]!=s[r]) return false;
            l++;r--;
        }
        return true;
    }
    
    int cst(int num){
        string s=convert(num);
        int d=0;
        while(true){
            if((num-d>=1) && checkB(num-d)) return d;
            if(checkB(num+d)) return d;
            d++;
        }
        return -1;
    }
    
    vector<int> minOperations(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            
            ans[i]=cst(nums[i]);
        }
        return ans;
    }
};