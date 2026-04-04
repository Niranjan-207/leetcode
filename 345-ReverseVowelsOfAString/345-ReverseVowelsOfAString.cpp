// Last updated: 4/4/2026, 11:05:10 PM
class Solution {
public:
    string reverseVowels(string s) {
        set<char> se={'a','e','i','o','u','A','E','I','O','U'};
        int p1=0;
        int p2=s.length()-1;
        int n=s.length();

        while(p1<p2){
            while(p1<p2 && se.find(s[p1])==se.end()) p1++;
            while(p1<p2 && se.find(s[p2])==se.end()) p2--;

            if(p1<p2)
                swap(s[p1++],s[p2--]);
        }
        return s;
    }
};

// l e e t c o d e
// 0 1 2 3 4 5 6 7
//     p1    p2