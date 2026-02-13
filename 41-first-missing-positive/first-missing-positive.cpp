class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        unordered_map<int,int> mp;

        // Store only positive numbers
        for(int val : nums){
            if(val > 0){
                mp[val]++;
            }
        }

        // Check from 1 to n
        for(int i = 1; i <= nums.size(); i++){
            if(mp.find(i) == mp.end()){
                return i;
            }
        }

        // If all 1..n exist
        return nums.size() + 1;
    }
};
