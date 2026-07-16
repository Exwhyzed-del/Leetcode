class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {

        unordered_map<int,int> mp1, mp2;
        int l1 = 0, l2 = 0;
        int ans = 0;

        for (int r = 0; r < nums.size(); r++) {

            mp1[nums[r]]++;
            mp2[nums[r]]++;

            while (mp1.size() > k) {
                mp1[nums[l1]]--;
                if (mp1[nums[l1]] == 0)
                    mp1.erase(nums[l1]);
                l1++;
            }

            while (mp2.size() > k - 1) {
                mp2[nums[l2]]--;
                if (mp2[nums[l2]] == 0)
                    mp2.erase(nums[l2]);
                l2++;
            }

            ans += (l2 - l1);
        }

        return ans;
    }
};