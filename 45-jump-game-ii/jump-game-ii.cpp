class Solution {
public:
    int jump(vector<int>& nums) {
        int totaljump = 0;
        int destination = nums.size() - 1;
        int covrage = 0;
        int lastindex = 0;

        if(nums.size() <= 1) return 0;

        for(int i = 0; i < nums.size() - 1; i++) {
            covrage = max(covrage, nums[i] + i);

            if(i == lastindex) {
                lastindex = covrage;
                totaljump++;
            }

            if(lastindex >= destination) {
                return totaljump;
            }
        }

        return totaljump;
    }
};