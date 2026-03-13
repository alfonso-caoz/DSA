#include <algorithm>

class Solution {
public:
    // Time Complexity O(n). Space Complexity O(1).
    int findLengthOfLCIS(vector<int>& nums) {
       
        int max_LCIS = 1; // Maximum length so far
        int current_LCIS = 1; // Current Continuous length found, if broken it will be reset
        
        for (size_t i = 1; i < nums.size(); ++i) {
            if (nums[i] > nums[i-1]) {
                ++current_LCIS;
                max_LCIS = std::max(max_LCIS, current_LCIS);
            } else {
                current_LCIS = 1; // Reset
            }
        }

        return max_LCIS;

    }
};
