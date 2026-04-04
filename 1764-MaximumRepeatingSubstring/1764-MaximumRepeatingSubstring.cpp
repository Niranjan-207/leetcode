// Last updated: 4/4/2026, 11:01:49 PM
class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int cnt=0;
        string temp=word;
        while(sequence.find(temp)!=string::npos){
            cnt++;
            temp+=word;
        }
        return cnt;
    }
};