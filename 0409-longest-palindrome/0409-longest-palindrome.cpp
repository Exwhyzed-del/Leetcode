class Solution {
public:
    int longestPalindrome(string s) {
        int ans=0;
        bool odd=false;
        unordered_map<char,int>mp;
        for(auto ch:s){
            mp[ch]++;
        }
        for(auto it:mp){
            int freq=it.second;
            int z=it.second/2;
            ans+=(z*2);

            if(freq%2==1){
                 odd=true;
            }
           
        }
        if(odd){
            ans+=1;
        }
        return ans;

    }
};