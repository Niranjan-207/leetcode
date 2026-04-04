// Last updated: 4/4/2026, 10:58:41 PM
class Solution {
public:
    string lexSmallest(string s) {
        int n=s.length();
        vector<string> ans;
        for(int i=1;i<=n;i++){
            string left=s.substr(0,i);
            string right=s.substr(i);
            
            string leftr=left;
            reverse(leftr.begin(),leftr.end());
            string rightr=right;
            reverse(rightr.begin(),rightr.end());
            
            if(left+rightr < s){
                ans.push_back(left+rightr);
            }
            if(leftr+right<s){
                ans.push_back(leftr+right);
            }

            
            
        }
        sort(ans.begin(),ans.end());
        ans.push_back(s);
        return ans[0];
    }
};