// Last updated: 4/4/2026, 10:59:48 PM
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
         std::set<int> distinctGreaterThanK;
            for (int num : nums) {
            if (num < k) {
                return -1; 
            }
            if (num > k) {
                distinctGreaterThanK.insert(num); 
            }
        }

       
        return distinctGreaterThanK.size();
    }
};