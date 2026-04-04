// Last updated: 4/4/2026, 11:02:40 PM
class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int n=points.size();
        if(n==1)    return 0;
        int tim=0;
        for(int i=1;i<n;i++){
            int x=abs(points[i-1][0]-points[i][0]);
            int y=abs(points[i-1][1]-points[i][1]);
            tim+=max(x,y);
        }
        return tim;
    }
};