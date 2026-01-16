class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int ans=0;
        int sum=0;
        for(int val:nums){
            sum+=val;
            ans=min(sum,ans);
        }
        return -ans+1;
    }
};