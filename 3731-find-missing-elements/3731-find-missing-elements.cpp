class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s=nums[0];
        int i=0;
        vector<int>ans;
        while(i<nums.size()){
            if(s==nums[i]){
                i++;
            }else{
                ans.push_back(s);
            }
            s++;
        }
        return ans;
    }
};