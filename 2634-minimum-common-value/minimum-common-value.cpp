class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        int ans=INT_MAX;

       for(auto x:nums1){
        mp[x]++;
       }

       for(auto it:nums2){
        if(mp.find(it)!=mp.end()){
            if(it<ans){
                ans=it;
            }
        }
       }
       if(ans==INT_MAX){
        return -1;
       }
       return ans;
    }
};