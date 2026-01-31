// class Solution {
// public:
//     string reverseVowels(string s) {
//         string word = s;
//         int start = 0;
//         int end = s.length() - 1;
//         string vowels = "aeiouAEIOU";
//         while (start < end) {
//             while (start < end && vowels.find(word[start]) == string::npos) {
//                 start++;
//             }
//             while (start < end && vowels.find(word[end]) == string::npos) {
//                 end--;
//             }
//             swap(word[start], word[end]);
//             start++;
//             end--;
//         }
//         return word;
//     }
// };

class Solution {
public:

    bool isLower(char c)
    {
        c=tolower(c);

        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }
    string reverseVowels(string s) 
    {
        int size=s.size();

        int i=0,j=size-1;

        while(i<j)
        {
            if(!isLower(s[i]))
            {
                i++;
            }
            else if(!isLower(s[j]))
            {
                j--;
            }
            else
            {
                swap(s[i],s[j]);
                i++,j--;
            }
        }
        return s;
    }
};