// Last updated: 4/4/2026, 11:01:31 PM
class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> arr(26,0);
        int count=0;
        for(char &ch :sentence){
            int index=int(ch)-97;
            if(arr[index]!=1){
                arr[index]=1;
                count++;
                if(count==26){return true;}
            }
        }
        return false;
    }
};