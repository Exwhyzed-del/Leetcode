class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index=0;
        for(int i;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[index],nums[i]);
                index++;
            }
        }
    }
};