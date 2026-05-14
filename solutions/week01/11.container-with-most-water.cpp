/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0; int r = height.size() - 1; int maxArea = 0;
        

        while ( l < r ){
            
            int area = std :: min ( height[ l ], height [ r ] ) * ( r - l );

            if ( area > maxArea ) {
                maxArea = area;
            }

            if ( height [ l ] > height [ r ]) {
                r--;
            }   else if ( height [ l ] < height [ r ] ) {
                l++;
            }   else    {
                l++;
            }

        }

        return maxArea;
    }
};
// @lc code=end

