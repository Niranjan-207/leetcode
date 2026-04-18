// Last updated: 4/18/2026, 10:44:11 PM
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        for(string & word : words){
            if(word.substr(0, pref.length()) == pref) count++;
        }
        return count;
    }
};