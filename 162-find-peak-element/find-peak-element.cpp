class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int idx = max_element(nums.begin(), nums.end()) - nums.begin();
        return idx;
    }
};
