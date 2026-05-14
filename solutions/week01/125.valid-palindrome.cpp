/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.size() - 1;

        while ( l < r ) {

            if ( ! std::isalnum ( static_cast<unsigned char> ( s [ l ] ) ) ) {

                l++;

            }   else if (! std::isalnum ( static_cast<unsigned char> ( s [ r ] ) )) {
                
                r--;

            }   else {

                if ( ( char ) std :: tolower ( s [ l ] ) == ( char ) std :: tolower (s [ r ] ) ) {
                    
                    l++, r--;

                }   else {

                    return false;

                }

            }

        }

        return true;
    
    }
};
// @lc code=end

