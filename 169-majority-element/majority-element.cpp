class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int countMajority = nums.size() / 2;
        unordered_map<int, int> mp;

        // Count frequency
        for(auto num : nums){
            mp[num]++;
        }

        for(auto num : mp){
            if(num.second > countMajority){
                return num.first;
            }
        }

        return -1; 
    }
};