class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        vector<int> result;
        int expected = 1;
        int n = nums.size();
        
        for(int i = 0; i < n; i++) {
            // Add all missing numbers before nums[i]
            while(expected < nums[i]) {
                result.push_back(expected);
                expected++;
            }
            
            // Move expected forward
            if(expected == nums[i]) {
                expected++;
            }
        }
        
        // Add remaining missing numbers after last element
        while(expected <= n) {
            result.push_back(expected);
            expected++;
        }
        
        return result;
    }
};
