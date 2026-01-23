class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int st = 0;  // store index of peak so far

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[st]) {
                st = i;   // update index
            }
        }
        return st;   // return index, not value
    }
};
