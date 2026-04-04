// Last updated: 4/4/2026, 11:01:11 PM
class Solution {
public:
    int bsl(vector<int>& idx,int k){
        int n=idx.size();
        if(k<idx[0])  return 0;
        int l=0,r=n-1;
        int ans=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(idx[mid]==k){
                return mid;
            }else if(idx[mid]>k){
                ans=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return ans;
    }

    int bsr(vector<int>& idx,int k){
        int n=idx.size();
        if(k>idx[n-1])  return n-1;
        int l=0,r=n-1;
        int ans=n;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(idx[mid]==k){
                return mid;
            }else if(idx[mid]>k){
                //ans=mid;
                r=mid-1;
            }else{
                ans=mid;
                l=mid+1;
            }
        }
        return ans;
    }

    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        vector<int> idx;
        for(int i=0;i<s.length();i++){
            if(s[i]=='|') idx.push_back(i);
        }
        vector<int> ans;
        for(int i=0;i<queries.size();i++){
            if(idx.size()==0){
                ans.push_back(0);
                continue;
            } 
            int lk=queries[i][0];
            int rk=queries[i][1];
            int lidx=bsl(idx,lk);
            int ridx=bsr(idx,rk);
            
            if( lidx==-1 || ridx==idx.size() || lidx>=ridx){
                ans.push_back(0);
                continue;
            }
            ans.push_back(idx[ridx]-idx[lidx]-1-(ridx-lidx-1));
        }
        return ans;
    }
};
// 0 1 4 6 8
//     -   -