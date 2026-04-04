// Last updated: 4/4/2026, 11:04:47 PM
class Solution {
public:
    int compress(vector<char>& chars) {
        
        int n=chars.size();
        int i=0;
        int idx=0;
        while(i<n){
            char c=chars[i];
            chars[idx++]=c;
            int cnt=1;
            i++;
            while(i<n && chars[i]==c){
                i++;cnt++;
            }
            if(cnt>1){
                string cs=to_string(cnt);
                for(char c:cs){
                    chars[idx++]=c;
                }
            }
        }
        return idx;
    }
};