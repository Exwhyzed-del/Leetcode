class Solution {
public:
    char findKthBit(int n, int k) {

        string s = "0";

        for(int i = 2; i <= n; i++) {

            string temp = "";

            // invert
            for(char c : s){
                if(c == '0')
                    temp += '1';
                else
                    temp += '0';
            }

            // reverse
            reverse(temp.begin(), temp.end());

            // build new string
            s = s + "1" + temp;
        }

        return s[k-1];   // k is 1-indexed
    }
};