// Last updated: 4/4/2026, 11:04:24 PM
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for(int i=0;i<flowerbed.size();i++){
            bool l=true,r=true;
            if(i > 0 && flowerbed[i-1] == 1) l = false;
            if(i < flowerbed.size() - 1 && flowerbed[i+1] == 1) r = false;

            if(l && r && flowerbed[i]==0){
                flowerbed[i]=1;
                n--;
            }

        }

        
        return n<=0;
    }
};