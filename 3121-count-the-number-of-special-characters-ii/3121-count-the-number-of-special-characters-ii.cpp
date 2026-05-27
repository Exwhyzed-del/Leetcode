class Solution {
public:
    int numberOfSpecialChars(string word) {
        int count = 0;

        for(char ch = 'a'; ch <= 'z'; ch++) {
            char upper = toupper(ch);

            int lastLower = -1;
            int firstUpper = -1;

            for(int i = 0; i < word.size(); i++) {
                if(word[i] == ch) {
                    lastLower = i;
                }

                if(word[i] == upper && firstUpper == -1) {
                    firstUpper = i;
                }
            }

            if(lastLower != -1 && firstUpper != -1 && lastLower < firstUpper) {
                count++;
            }
        }

        return count;
    }
};