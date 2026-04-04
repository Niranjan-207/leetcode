// Last updated: 4/4/2026, 11:01:14 PM
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(string& s:operations){
            if(s=="++X" || s=="X++"){
                x++;
            }else{
                x--;
            }
        }
        return x;
    }
};