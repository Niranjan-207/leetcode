// Last updated: 4/18/2026, 10:52:36 PM
1class Solution {
2public:
3    int isPrefixOfWord(string sentence, string searchWord) {
4        int cnt=0;
5        string word="";
6        int wcnt=1;
7        for(char c:sentence){
8            if(c==' '){
9                if(word.starts_with(searchWord))   return wcnt;
10                wcnt++;
11                word="";
12            }else{
13                word+=c;
14            }
15        }
16        if(word.starts_with(searchWord))   return wcnt;
17        return -1;
18    }
19};