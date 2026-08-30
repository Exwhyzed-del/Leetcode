class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        
        int n = nums.size();

        int maxi = *max_element(nums.begin(), nums.end());
        int mini = *min_element(nums.begin(), nums.end());

        int miniIndex = 0;
        int maxiIndex = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == mini)
                miniIndex = i;

            if (nums[i] == maxi)
                maxiIndex = i;
        }

        // Remove both from left
        int left = max(miniIndex, maxiIndex) + 1;

        // Remove both from right
        int right = n - min(miniIndex, maxiIndex);

        // Remove one from left and one from right
        int both = min(miniIndex, maxiIndex) + 1
                 + n - max(miniIndex, maxiIndex);

        return min({left, right, both});
    }
};
