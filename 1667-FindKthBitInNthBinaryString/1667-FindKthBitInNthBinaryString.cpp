// Last updated: 4/4/2026, 11:01:56 PM
class Solution {
public:
    char findKthBit(int n, int k) {
        //vector<string> arr(n+1,"");
        //arr[1]="0";
        string pre="0";
        for(int i=2;i<=n;i++){
            //string pre=arr[i-1];
            string inv="";
            for(char c:pre){
                if(c=='1')  inv+='0';
                else    inv+='1';
            }
            reverse(begin(inv),end(inv));
            pre=pre+"1"+inv;
        }
        return pre[k-1];
    }
};