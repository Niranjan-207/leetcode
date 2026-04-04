// Last updated: 4/4/2026, 11:01:08 PM
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int cnt=0;
        //int idx=0;
        int n=tickets.size();
        // while(tickets[k]>0){
        //     if(tickets[idx]>0){
        //         tickets[idx]--;
        //         cnt++;
        //     }
        //     idx=(idx+1)%n;
        // }
        // return cnt;
        int tar=tickets[k];
        for(int i=0;i<n;i++){
            
            if(i<k) cnt+=(min(tar,tickets[i]));
            else if(i>k)    cnt+=(min(tar-1,tickets[i]));
            else cnt+=tickets[i];
        }
       
        return cnt;
    }
    //2 3 2
    //2 3 1
    //1 2 2

};