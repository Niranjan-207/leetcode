// Last updated: 4/4/2026, 11:03:45 PM
class Solution {
public:
    double side(int x1,int y1,int x2,int y2){
        return (sqrt(pow((x2-x1),2)+pow((y2-y1),2)));
    }
    double area(vector<int>& a,vector<int>& b,vector<int>& c){
        double s1=side(a[0],a[1],b[0],b[1]);
        double s2=side(b[0],b[1],c[0],c[1]);
        double s3=side(c[0],c[1],a[0],a[1]);
        double total=(s1+s2+s3)/2;
        return sqrt(total*(total-s1)*(total-s2)*(total-s3));
    }
    double largestTriangleArea(vector<vector<int>>& points) {
        int n=points.size();
        double ans=0;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    double temp=area(points[i],points[j],points[k]);
                    ans=max(ans,temp);
                }
            }
        }
        return ans;
    }
};