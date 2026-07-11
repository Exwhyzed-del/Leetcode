class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans;
        int maxxi=*max_element(candies.begin(),candies.end());

        for(int x:candies){
            int sum=x+extraCandies;
            if(sum>=maxxi){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};