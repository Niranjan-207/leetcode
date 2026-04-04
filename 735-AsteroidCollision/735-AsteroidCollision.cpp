// Last updated: 4/4/2026, 11:04:05 PM
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(int& ast:asteroids){
            bool destroyed=false;
            while(!st.empty() && ast<0 && st.top()>0 ){
                if(st.top()==-(ast)){
                    st.pop();
                    destroyed=true;
                    break;
                }else if(st.top()<-(ast)){
                    st.pop();
                }else{
                    destroyed=true;
                    break;
                }
            }
            if(!destroyed)  st.push(ast);

        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};