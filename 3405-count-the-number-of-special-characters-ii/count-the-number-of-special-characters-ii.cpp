class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char> st(word.begin(), word.end());
        int count = 0;

        for(char ch = 'a'; ch <= 'z'; ch++) {
            char upper = toupper(ch);

            if(st.count(ch) && st.count(upper) &&
               word.rfind(ch) < word.find(upper)) {
                count++;
            }
        }

        return count;
    }
};