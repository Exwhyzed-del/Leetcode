class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size(), left = 0, right, sumleft = 0, sumright = 0, pivot = -1; 
        for(int i = 0; i < n; i++){
            right = i+1;

            while(left < i){
                sumleft += nums[left];
                left++;
            }
            while(right < n){
                sumright += nums[right];
                right++;
            }
            if(sumleft == sumright){
                pivot = i;
                break;
            }
            sumleft = 0;
            sumright = 0;
            left = 0;
        }
        return pivot;
    }
};