class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;

        sort(nums.begin(), nums.end());

        int longest = 1;
        int current = 1;

        for(int i = 1; i < nums.size(); i++) {

            // Skip duplicates
            if(nums[i] == nums[i-1]) continue;

            if(nums[i] == nums[i-1] + 1) {
                current++;            // continue the streak
            } else {
                longest = max(longest, current);
                current = 1;          // reset streak
            }
        }

        longest = max(longest, current);
        return longest;
    }
};