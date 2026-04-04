// Last updated: 4/4/2026, 11:06:37 PM
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tcst=accumulate(begin(cost),end(cost),0);
        int tgas=accumulate(begin(gas),end(gas),0);

        if(tcst>tgas)   return -1;

        int dis=0,idx=0;
        for(int i=0;i<gas.size();i++){
            dis+=gas[i]-cost[i];
            if(dis<0){
                dis=0;
                idx=i+1;
            }
        }
        return idx;
    }

};


// gas  1 2 5 1 5  100
// cost 3 4 4 2 10  1
     