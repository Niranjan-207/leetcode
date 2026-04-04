// Last updated: 4/4/2026, 11:02:41 PM
class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
       vector<string> ans;
       string prev="";
       for(string& word:words){
        string temp=word;
        sort(temp.begin(),temp.end());
        if(ans.empty() || prev!=temp){
            ans.push_back(word);
        }
        prev=temp;
       }
       return ans;
    }
};