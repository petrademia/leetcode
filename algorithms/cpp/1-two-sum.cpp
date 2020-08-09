//
// Created by Petrus on 8/9/2020.
//

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> sum;
        vector<int> indices;
        for(int i = 0; i < nums.size(); i++) {
            int rem = target - nums[i];
            if (sum.find(rem) != sum.end()) {
                indices = {sum[rem], i};
            }
            sum[nums[i]] = i;
        }
        return indices;
    }
};