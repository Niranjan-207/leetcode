// Last updated: 4/4/2026, 11:07:12 PM
class Solution {
public:
    string simplifyPath(string path) {
        string s="";
        int n=path.length();
        stack<string> st;
        for(int i=0;i<n;i++){
            if(path[i]=='/')    continue;
            string temp="";
            while(i<n && path[i]!='/'){
                temp+=path[i++];
            }
            if(temp=="." || (temp==".." && st.empty()))   continue;
            if(temp==".." && !st.empty())   st.pop();
            else st.push(temp);
        }
        s+='/';
        vector<string> temp;
        while(!st.empty()){
            temp.push_back(st.top());
            st.pop();
        }
        reverse(temp.begin(),temp.end());

        for(int i=0;i<temp.size();i++){
            s+=temp[i];
            if(i!=(temp.size()-1))s+='/';
        }
        return s;
    }
};