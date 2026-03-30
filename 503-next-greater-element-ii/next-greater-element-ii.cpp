class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        
        // Step 1: duplicate array
        vector<int> temp = nums;
        for(int i = 0; i < n; i++) {
            temp.push_back(nums[i]);
        }

        vector<int> ans(n, -1);

        // Step 2: same logic as yours (just linear now)
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < 2 * n; j++) {
                if(temp[j] > nums[i]) {
                    ans[i] = temp[j];
                    break;
                }
            }
        }

        return ans;
    }
};