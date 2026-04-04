// Last updated: 4/4/2026, 10:58:18 PM
class Solution {
public:
    int minimumFlips(int n) {
        vector<int> arr;
        while(n>0){
            int bit=n&1;
            arr.push_back(bit);
            n>>=1;
        }
        vector<int> temp=arr;
        reverse(temp.begin(),temp.end());
        int cnt=0;
        for(int i=0;i<arr.size();i++){
                if(arr[i]!=temp[i]) cnt++;
        }
        return cnt;
    }
};