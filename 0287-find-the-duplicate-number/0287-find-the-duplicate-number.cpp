class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int val:nums){
            mp[val]++;
        }
        for(auto it:mp){
            if(it.second>1){
                return it.first;
            }
        }
        return -1;
    }
};