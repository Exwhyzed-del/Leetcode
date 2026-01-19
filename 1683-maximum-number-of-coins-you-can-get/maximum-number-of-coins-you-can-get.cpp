class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n=piles.size();
        sort(piles.begin(),piles.end());
        int low=0,high=n-2;
        int ans=0;
        while(low<high){
            ans+=piles[high];
            low++;
            high-=2;
        }
        return ans;
    }
};