// Last updated: 4/4/2026, 11:03:59 PM
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l=0;
        int h=letters.size()-1;
        int ans=h+1;
        while(l<=h){
            int m=(l+h)/2;
            if(letters[m]>target)   ans=m;
            if(letters[m]<=target)  l=m+1;
            else    h=m-1;
        }
        if(ans==letters.size()) return letters[0];
        return letters[ans];
    }
};