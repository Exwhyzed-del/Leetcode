class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size()/3;
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int x:nums){
            mp[x]++;

        }
        for(auto val:mp){
            if(val.second>n){
                ans.push_back(val.first);
            }
        }
        return ans;
    
    }
};