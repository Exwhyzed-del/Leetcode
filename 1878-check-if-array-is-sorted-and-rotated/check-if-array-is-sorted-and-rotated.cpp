class Solution {
public:
    bool check(vector<int>& nums) {

        int count=0;
        int n=nums.size();
        for(int i=0; i<n-1;i++){
            if(nums[i]>nums[i+1]){
                count++;
            }
        }
            if(nums[n-1]>nums[0]){
                count++;
            } 
            
        
        return count<=1;
    }
        // int count=0;
        // int n=nums.size();
        // if(nums.size()==0) return false;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]>nums[(i+1)%n]){
        //         count++;
        //     }
        // }
        // return count<=1;
    // }
};