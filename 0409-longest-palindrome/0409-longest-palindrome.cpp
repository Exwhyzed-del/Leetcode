class Solution {
public:
    int longestPalindrome(string s) {
        vector<string>ans;
        string left="";
        string middle="";
        unordered_map<char,int>mp;
        for(char ch:s){
            mp[ch]++;
        }
        for(auto it:mp){
            char ch=it.first;
            int freq=it.second;


            //add pairs
            while(freq>=2){
                left+=ch;
                freq-=2;
            }
            if(freq==1 && middle==""){
                middle+=ch;
            }
        }
        string right=left;
        reverse(right.begin(),right.end());
        string z=left+middle+right;
        return (int)z.size();
    }
};