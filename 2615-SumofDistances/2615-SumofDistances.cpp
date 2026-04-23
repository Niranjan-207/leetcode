// Last updated: 4/23/2026, 8:42:48 PM
class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]].push_back(i);
        }

        vector<long long> ans(nums.size(), 0);
        
        for (auto& [num, indices] : mp) {
            // vector<long long> prefix(indices.begin(), indices.end());

            // as we are iterating on the indices from left to right and as we are not processing 
            // random queries we don't need to store the whole prefix sum into an 
            // array, we can have a totalSum and a running prefixSum using which we can 
            // calculate the leftSum and rightSum easily/effeciently
            long long totalSum = accumulate(indices.begin(), indices.end(), 0LL);

            // auto getLeftSum = [&](int r) -> long long {
            //     return r > 0 ? prefix[r - 1] : 0;
            // };

            // auto getRightSum = [&](int l) -> long long {
            //     return prefix[prefix.size() - 1] - prefix[l];
            // };

            long long prefix = 0;

            for(int i = 0; i < indices.size(); i++){
                // long long leftSum = getLeftSum(i);
                // long long rightSum = getRightSum(i);
                // int elementsOnLeft = i;
                // int elementsOnRight = (prefix.size() - i - 1);
                // long long totalLeftSum = ((long long)elementsOnLeft * indices[i]) - leftSum;
                // long long totalRightSum = rightSum - ((long long)elementsOnRight * indices[i]);
                // ans[indices[i]] = totalLeftSum + totalRightSum;

                long long leftSum = prefix;
                prefix += indices[i];
                long long rightSum = totalSum - prefix;
                long long totalLeftSum = ((long long)i * indices[i]) - leftSum;
                long long totalRightSum = rightSum - ((long long)(indices.size() - i - 1) * indices[i]);
                ans[indices[i]] = totalLeftSum + totalRightSum;
            }
        }

        return ans;
    }
};