class Solution {
public:
    int maxArea(vector<int>& nums) {
        int st = 0;
        int end = nums.size() - 1;
        int maxwater = 0;

        while (st < end) {
            int w = end - st;
            int h = min(nums[st], nums[end]);
            int area = h * w;

            maxwater = max(maxwater, area);

            if (nums[st] < nums[end])
                st++;
            else
                end--;
        }

        return maxwater;
    }
};