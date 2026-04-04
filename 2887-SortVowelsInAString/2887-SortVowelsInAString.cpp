// Last updated: 4/4/2026, 11:00:21 PM
class Solution {
public:
    string sortVowels(string s) {
        vector<char> vec;
        set<char> se={'a','e','i','o','u','A','E','I','O','U'};
        for(char& c:s){
            if(se.find(c)!=se.end())  vec.push_back(c);
        }
        sort(vec.begin(),vec.end());
        int i=0;
        for(char& c:s){
            if(se.find(c)!=se.end()){
                c=vec[i++];
            }
        }
        return s;
    }
};