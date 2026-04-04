// Last updated: 4/4/2026, 10:59:17 PM
class Solution {
public:
    bool isValid(string& s){
        if(s=="")   return false;
        for(char& c:s){
            if((c>='A' && c<='Z') || (c>='a' && c<='z') || (c>='0' && c<='9') || c=='_')   continue;
            return false;
        }
        return true;
    }

    bool present(string& s){
        return (s=="electronics" || s=="grocery" || s=="pharmacy" || s=="restaurant");
    }

    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        vector<pair<string,string>> temp;
        for(int i=0;i<code.size();i++){
            if(isValid(code[i]) && present(businessLine[i]) && isActive[i]) temp.push_back({businessLine[i],code[i]});
        }
        vector<string> ans;
        sort(temp.begin(),temp.end());
        for(auto& [a,b]:temp){
            ans.push_back(b);
        }
        return ans;
    }
};