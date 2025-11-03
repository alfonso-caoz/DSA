class Solution {
public:
    // Boyer-Moore Majority Voting Algorithm.
    // Time complexity O(n). Space complexity 0(1).
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int votes = 0;

        for (int i = 0; i < nums.size(); ++i) {
            if (votes == 0) candidate = nums[i]; 
            votes += (nums[i] == candidate) ? 1 : -1;
        }

        return candidate;

    }
};
