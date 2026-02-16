class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>s;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        for(int i=1;true;i++){
            if(!s.count(i)) return i;
        }
        return -1;
    }
};