// Last updated: 4/4/2026, 10:59:01 PM
class Solution {
public:
    int minCost(int n) {
        if(n==1) return 0;
        queue<int> q;
        int cst=0;
        if(n&1){
            q.push(n-1);
            q.push(1);
            cst=(n-1);
        }else{
            q.push(n/2);
            q.push(n/2);
            cst=(n*n)/4;
        }
        
        while(!q.empty()){
            int ele=q.front();
            q.pop();
            if(ele==1){
                continue;
            }else{
                if(ele&1){
                    q.push(ele-1);
                    q.push(1);
                    cst+=(ele-1);
                }else{
                    q.push(ele/2);
                    q.push(ele/2);
                    cst+=(ele*ele)/4;
                }
            }
        }
        return cst;
    }
};