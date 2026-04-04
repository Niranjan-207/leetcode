// Last updated: 4/4/2026, 11:03:17 PM
class Solution {
public:
    string tospecial(string s){
        string temp="";
        set<char> vowel={'a','e','i','o','u','A','E','I','O','U'};
        for(char c:s){
                if(vowel.find(c)!=vowel.end()){
                    temp+='*';
                }else{
                    temp+=tolower(c);
                }
        }
        return temp;
    }

    string toLowerStr(const string& s) {
        string result = s;
        for (char &c : result) {
            c = tolower(c);  
        }
        return result;
    }

    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        vector<string> ans;

        set<string> se;
        for(string& s:wordlist){
            se.insert(s);
        }

        unordered_map<string,string> umlower;

        unordered_map<string,string> umspecial;

        for (string& s : wordlist) {
            string lower = toLowerStr(s);
            string special = tospecial(s);

            if (umlower.find(lower) == umlower.end())
                umlower[lower] = s;

            if (umspecial.find(special) == umspecial.end())
                umspecial[special] = s;
        }
        
        for(string s:queries){
            if(se.find(s)!=se.end()){
                ans.push_back(s);
            }else if(umlower.find(toLowerStr(s))!=umlower.end()){
                ans.push_back(umlower[toLowerStr(s)]);

            }else if(umspecial.find(tospecial(toLowerStr(s)))!=umspecial.end()){
                ans.push_back(umspecial[tospecial(toLowerStr(s))]);
            }else{
                ans.push_back("");
            }
        }

        return ans;


    }
};