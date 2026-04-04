// Last updated: 4/4/2026, 11:00:24 PM
class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        vector<vector<int>> arr;
        int n=positions.size();
        for(int i=0;i<n;i++){
            int dir=healths[i];
            if(directions[i]=='L')  dir*=(-1);
            arr.push_back({positions[i],dir,i});
        }
        sort(arr.begin(), arr.end(), [&](auto &x, auto &y){
            return x[0] < y[0];
        });
        stack<int> st;
        for(int i=0;i<arr.size();i++){
            bool destroyed=false;
            while(!st.empty() && arr[st.top()][1]>0 && arr[i][1]<0){
                int p=st.top();
                int rhlt=(arr[p][1]);
                int lhlt=-arr[i][1];
                if(rhlt==lhlt){
                    st.pop();
                    destroyed=true;
                    arr[i][1]=0;
                    break;
                }
                else if(rhlt<lhlt){
                    st.pop();
                    lhlt--;
                    arr[i][1]=-lhlt;
                }else{
                    arr[p][1]=rhlt-1;
                    destroyed=true;
                    arr[i][1]=0;
                    break;
                }

            }
            
            if(!destroyed)  st.push(i);
        }
        vector<vector<int>> temp;
         while(!st.empty()){
            temp.push_back(arr[st.top()]);
            st.pop();
        }

        sort(temp.begin(), temp.end(), 
     [](const vector<int>& a, const vector<int>& b) {
         return a[2] < b[2];  
     });

    vector<int> ans;
    for(int i=0;i<temp.size();i++){
        int hlt=abs(temp[i][1]);
        ans.push_back(hlt);
    }
    return ans;
    }
};