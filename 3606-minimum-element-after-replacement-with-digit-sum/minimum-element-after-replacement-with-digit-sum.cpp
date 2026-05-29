class Solution {
public:
    int minElement(vector<int>& nums) {
        int mini = INT_MAX;

        for(int val : nums) {
            int cursum = 0;

            while(val > 0) {
                cursum += val % 10;
                val /= 10;
            }

            mini = min(mini, cursum);
        }

        return mini;
    }
};