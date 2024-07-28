#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> index_map;

        for (int i = 0; i < nums.size(); ++i) {
            int difference = target - nums[i];

            if (index_map.find(difference) != index_map.end()) {
                return {index_map[difference], i};
            }

            index_map[nums[i]] = i;
        }
        return {};
    }
};