class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        unordered_map<int,int> mp1, mp2;
        int l1 = 0, l2 = 0;
        int ans = 0;

        for (int r = 0; r < nums.size(); r++) {

            // grow both windows by including nums[r]
            mp1[nums[r]]++;
            mp2[nums[r]]++;

            // shrink mp1's window until it has at most k distinct values
            while (mp1.size() > k) {
                mp1[nums[l1]]--;
                if (mp1[nums[l1]] == 0)
                    mp1.erase(nums[l1]);
                l1++;
            }

            // shrink mp2's window until it has at most k-1 distinct values
            while (mp2.size() > k - 1) {
                mp2[nums[l2]]--;
                if (mp2[nums[l2]] == 0)
                    mp2.erase(nums[l2]);
                l2++;
            }

            // instead of ans += (l2 - l1), count each valid start one at a time
            for (int start = l1; start < l2; start++) {
                ans++;
            }
        }

        return ans;
    }
};