class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size()-1;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(i>ans) return false;
            ans=max(ans,nums[i]+i);
        }
        if(ans>=n){
            return true;
        }
        return false;
    }
};