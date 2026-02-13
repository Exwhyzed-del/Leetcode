class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        
        // Count frequency
        for(int x : nums){
            mp[x]++;
        }
        
        int majority = nums[0];
        int maxCount = 0;
        
        // Find element with maximum frequency
        for(auto p : mp){
            if(p.second > maxCount){
                maxCount = p.second;
                majority = p.first;
            }
        }
        
        return majority;
    }
};
