class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ans;
        for(int val:nums){
            mp[val]++;
        }
        for(auto val:mp){
            if(val.second>1){
                ans=val.first;
            }
        }
        return ans;
    }
};