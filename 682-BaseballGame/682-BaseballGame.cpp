// Last updated: 4/4/2026, 11:04:14 PM
class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> con;
        for(int i=0;i<operations.size();i++){
            string ch=operations[i];
                if(ch=="+"){
                    int op1=con.top();
                    con.pop();
                    int op2=con.top();
                    con.push(op1);
                    con.push(op1+op2);
                }else if(ch=="D"){
                    
                    con.push(con.top()*2);
                }else if(ch=="C"){
                    con.pop();
                }else{
                    con.push(stoi(ch));
                }
            }
        int sum = 0;
        while (!con.empty()) {
            sum += con.top();
            con.pop();
        }

        return sum;
    }
};