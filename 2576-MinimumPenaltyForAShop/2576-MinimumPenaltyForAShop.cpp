// Last updated: 4/4/2026, 11:00:34 PM
class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.size();
        vector<int> arr(n+1,0);
        for(int i=0;i<n;i++){
           
                int sc=0;
                if(customers[i]=='Y')   sc=1;
                else    sc=-1;
                arr[i+1]=arr[i]+sc;
            
        }
        int idx=0;
        for(int i=1;i<=n;i++){
            if(arr[i]>arr[idx]) idx=i;
        }
        //if(idx==0)  return 0;
        return idx;
    }
};