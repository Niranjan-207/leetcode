// Last updated: 4/4/2026, 11:02:39 PM
class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        if(products.size()>20){
            random_device rd;
            mt19937 g(rd());

            shuffle(begin(products),end(products), g);
        }
        
        vector<vector<string>> ans;
        sort(begin(products),end(products));

        for(int i=0;i<searchWord.length();i++){
            string ch=searchWord.substr(0,i+1);
            vector<string> temp;
            for(string& s:products){
                if(s.find(ch)==0){
                    temp.push_back(s);
                }
                if(temp.size()==3)   break;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};