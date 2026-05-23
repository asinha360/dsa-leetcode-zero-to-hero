/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 *
 * https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
 *
 * algorithms
 * Medium (39.00%)
 * Likes:    45102
 * Dislikes: 2220
 * Total Accepted:    9.5M
 * Total Submissions: 24.4M
 * Testcase Example:  '"abcabcbb"'
 *
 * Given a string s, find the length of the longest substring without duplicate
 * characters.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: s = "abcabcbb"
 * Output: 3
 * Explanation: The answer is "abc", with the length of 3. Note that "bca" and
 * "cab" are also correct answers.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: s = "bbbbb"
 * Output: 1
 * Explanation: The answer is "b", with the length of 1.
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: s = "pwwkew"
 * Output: 3
 * Explanation: The answer is "wke", with the length of 3.
 * Notice that the answer must be a substring, "pwke" is a subsequence and not
 * a substring.
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * 0 <= s.length <= 5 * 10^4
 * s consists of English letters, digits, symbols and spaces.
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // std::unordered_set<char> set;

        int l = 0; int r = 0; int max_length = 0;
        std::unordered_map<char, int> map;
        while (r < s.size()){
            // while (set.contains(s[r])){
            //     set.erase(s[l]);
            //     l++;
            // }
            if (map.count(s[r])) {
                l = std::max(l, map[s[r]] + 1);
            }
            map[s[r]] = r;
            // set.emplace(s[r]);
            max_length = std::max(max_length, r - l + 1);
            r++;
        }
        return max_length;
    }
};
// @lc code=end

