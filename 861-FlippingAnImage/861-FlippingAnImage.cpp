// Last updated: 4/4/2026, 11:03:43 PM
class Solution {
public:
    void reverse(vector<int>& arr){
        int n=arr.size();
        if(n&1){
            arr[n/2]^=1;
        }
        for(int i=0;i<n/2;i++){
            arr[i]^=1;
            arr[n-i-1]^=1;
            swap(arr[i],arr[n-i-1]);
        }
    }
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n=image.size();
        for(int i=0;i<n;i++){
            reverse(image[i]);
        }
        return image;
    }
};