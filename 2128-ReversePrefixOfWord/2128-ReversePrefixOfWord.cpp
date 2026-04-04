// Last updated: 4/4/2026, 11:01:16 PM
class Solution {
public:
    string reversePrefix(string word, char ch) {
        int pos = -1;
        
        for (int i = 0; i < word.size(); i++) {
            if (word[i] == ch) {
                pos = i;
                break;
            }
        }
        if(pos==-1){
            return word;
        }
        int start=0;
        int end=pos;
        while(start<end){
            char temp=word[end];
            word[end]=word[start];
            word[start]=temp;
            start++;
            end--;
        }
        return word;
    }
};