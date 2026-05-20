/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        std::unordered_map<int, int> map;

        for (int i = 0; i < static_cast<int>(nums.size()); i++){

            auto key = map.find(target - nums[i]);

            if (key != map.end()){
                
                return {i, key->second};
                
            }   else{
                
                map[nums[i]] = i; 
            }

        }
        
        return {};

    }
};
// @lc code=end

