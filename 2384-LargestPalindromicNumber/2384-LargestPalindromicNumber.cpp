// Last updated: 5/12/2026, 10:51:59 PM
class Solution {
public:
    int cnt[10];
    string largestPalindromic(string num) {
        
        memset(cnt,0,sizeof(cnt));
        for(int i=0;i<num.size();i++)
        {
            int digit=int(num[i]-'0');
            cnt[digit]++;
        }
        
        // for(auto it:cnt)
        // {
        //     cout<<it<<" ";
        // }
        // cout<<"\n";

        int len=0;
        int mid_digit=-1;
        for(int i=1;i<10;i++)
        {
            if(cnt[i]%2==0) len=len+cnt[i];
            else if(cnt[i]>0) 
            {
                mid_digit=i;
                cnt[i]--;
                len=len+cnt[i];
            }
            else cnt[i]=0;
        }


        if(len>0)
        {
            if(cnt[0]%2==0) len+=cnt[0];
            else 
            {
                cnt[0]--;
                mid_digit=max(0,mid_digit);
                len=len+cnt[0];
            }
        }
        else
        {
            mid_digit=max(0,mid_digit);
            string temp = "";
            temp=temp+char(mid_digit+'0');
            return temp;
        }


        if(mid_digit!=-1) len++;
        string ans;
        ans.resize(len);
        int ptr=0;
        for(int i=9;i>=0;i--)
        {
            int half=cnt[i]/2;
            while(cnt[i]>half)
            {
                ans[ptr]=char(i+'0');
                cnt[i]--;
                ptr++;
            }
        }
        if(mid_digit!=-1)
        {
            ans[ptr]=char(mid_digit+'0');
            ptr++;
        }

        for(int i=0;i<10;i++)
        {
            while(cnt[i]>0)
            {
                ans[ptr]=char(i+'0');
                cnt[i]--;
                ptr++;
            }
        }
        return ans;
    }
};