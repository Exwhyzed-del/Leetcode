class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> nums = heights;
        int count = 0;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < heights.size(); i++) {
            if (heights[i] != nums[i]) {
                count++;
            }
        }
        return count;
    }
};
