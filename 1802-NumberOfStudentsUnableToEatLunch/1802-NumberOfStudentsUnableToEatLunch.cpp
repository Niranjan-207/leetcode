// Last updated: 4/4/2026, 11:01:45 PM
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int cnt0=0,cnt1=0;
        for(int num:students){
            if(num==0)  cnt0++;
            else cnt1++;
        }

        for(int sandwich:sandwiches){
            if(sandwich==0){
                if(cnt0==0) break;
                cnt0--;
            }else{
                if(cnt1==0) break;
                cnt1--;
            }
        }
        return cnt0+cnt1;
    }
};