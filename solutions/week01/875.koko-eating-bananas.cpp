/*
 * @lc app=leetcode id=875 lang=cpp
 *
 * [875] Koko Eating Bananas
 *
 * https://leetcode.com/problems/koko-eating-bananas/description/
 *
 * algorithms
 * Medium (49.99%)
 * Likes:    13809
 * Dislikes: 924
 * Total Accepted:    1.6M
 * Total Submissions: 3.2M
 * Testcase Example:  '[3,6,7,11]\n8'
 *
 * Koko loves to eat bananas. There are n piles of bananas, the i^th pile has
 * piles[i] bananas. The guards have gone and will come back in h hours.
 * 
 * Koko can decide her bananas-per-hour eating speed of k. Each hour, she
 * chooses some pile of bananas and eats k bananas from that pile. If the pile
 * has less than k bananas, she eats all of them instead and will not eat any
 * more bananas during this hour.
 * 
 * Koko likes to eat slowly but still wants to finish eating all the bananas
 * before the guards return.
 * 
 * Return the minimum integer k such that she can eat all the bananas within h
 * hours.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: piles = [3,6,7,11], h = 8
 * Output: 4
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: piles = [30,11,23,4,20], h = 5
 * Output: 30
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: piles = [30,11,23,4,20], h = 6
 * Output: 23
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * 1 <= piles.length <= 10^4
 * piles.length <= h <= 10^9
 * 1 <= piles[i] <= 10^9
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int min_k = 1;
        int max_k = *std::max_element(piles.begin(), piles.end());
        int k = 0;

        while (min_k <= max_k){
            int mid = min_k + (static_cast<int> (max_k) - min_k)/2;
            long long time = time_func(mid, piles);
            if (time <= h){
                k = mid;
                max_k = mid - 1;
            }
            else {
                min_k = mid + 1;
            }
        }
        return k;
    }

    long long time_func(int mid, std::vector<int>& piles){
        long long sum = 0;
        
        for (int i = 0; i < static_cast<int>(piles.size()); i++){
            sum += (piles[i] / mid) + ((piles[i]%mid) != 0);
        }

        return sum;

    }

};
// @lc code=end

