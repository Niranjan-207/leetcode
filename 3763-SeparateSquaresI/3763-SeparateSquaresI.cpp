// Last updated: 4/4/2026, 10:59:40 PM
class Solution {
public:
    double area_gre_y(vector<vector<int>>& squares,double y){
        double A=0;
        for(auto& s:squares){
            double l=s[2],yu=s[1]+l;
            if(y>=yu)   continue;
            double h=min(l,yu-y);
            A+=(l*h);
        }
        return A;
    }

    double separateSquares(vector<vector<int>>& squares) {
        double tarea=area_gre_y(squares,-1e9);
        double halfArea=tarea/2.0;

        double minY=INT_MAX,maxY=INT_MIN;
        for(auto& s:squares){
            double l=s[2],ly=s[1];
            minY=min(minY,ly);
            maxY=max(maxY,ly+l);
        }

        double l=minY,r=maxY,m;
        double eps=1e-5;
        while(r-l>eps){
            m=(l+r)/2;
            double A=area_gre_y(squares,m);

            if(A>halfArea)  l=m;
            else    r=m;
        }
        return l;
    }
};