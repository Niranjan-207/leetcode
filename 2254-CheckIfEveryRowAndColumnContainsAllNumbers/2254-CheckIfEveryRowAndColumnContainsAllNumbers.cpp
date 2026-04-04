// Last updated: 4/4/2026, 11:01:02 PM
class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<unordered_set<int>> row(n);
        vector<unordered_set<int>> col(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int num=matrix[i][j];
                if(row[i].find(num)!=row[i].end() || col[j].find(num)!=col[j].end())    return false;
                row[i].insert(matrix[i][j]);
                col[j].insert(matrix[i][j]);
            }
            if(row[i].size()!=n)    return false;
        }
        for(auto s:row) if(s.size()!=n) return false;
        for(auto s:col) if(s.size()!=n) return false;
        return true;
    }
};