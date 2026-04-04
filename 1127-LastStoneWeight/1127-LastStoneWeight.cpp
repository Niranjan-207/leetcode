// Last updated: 4/4/2026, 11:02:56 PM
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int stone:stones)   pq.push(stone);
        while(pq.size()>1){
            int st1=pq.top();pq.pop();
            int st2=pq.top();pq.pop();
            if(st1>st2){
                pq.push((st1-st2));
            }else if(st1<st2){
                pq.push((st2-st1));
            }
        }
        if(pq.size()==0)    return 0;
        return pq.top();
    }
};