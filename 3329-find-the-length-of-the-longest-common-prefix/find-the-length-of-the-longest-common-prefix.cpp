class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<string>st;
        for(int val:arr1){
            string s=to_string(val);

            string temp="";
            for(char ch:s){
                temp+=ch;
                st.insert(temp);
            }

        }
        int ans=0;
        for(int x:arr2){
            string temp="";
            string s=to_string(x);
            for(char ch:s){
                temp+=ch;
                if(st.count(temp)){
                    ans=max(ans,(int)temp.size());
                }
            }
        }
        return ans;
    }
};