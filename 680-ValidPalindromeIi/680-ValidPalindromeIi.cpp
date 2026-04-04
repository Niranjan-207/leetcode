// Last updated: 4/4/2026, 11:04:15 PM
class Solution {
public:
    bool isPalindrome(string s,int l,int r){
        while(l<=r){
            if(s[l]==s[r]){
                l++;r--;
            }else{
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n=s.length();
        int l=0,r=n-1;
        while(l<=r){
            if(s[l]==s[r]){
                l++;r--;
                continue;
            }
            return (isPalindrome(s,l+1,r) || isPalindrome(s,l,r-1));
        }
        return true;
    }
};