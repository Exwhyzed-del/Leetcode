class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        ans[0]=1;
        //find left prod 
        for(int i=1;i<n;i++){
            ans[i]=ans[i-1]*nums[i-1];
        }
        //for right prod
        int rightprod=1;
        //we initiallized this vaiable to keep track of right podt instead of makeing another vector;
        for(int i=n-1;i>=0;i--){
            ans[i]=ans[i]*rightprod;
            rightprod*=nums[i];
        }
        return ans;

    }
};