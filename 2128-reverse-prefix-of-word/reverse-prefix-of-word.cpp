// class Solution {
// public:
//     string reversePrefix(string word, char ch) {
//         int idx = -1;

//         // 1. Find first occurrence of ch
//         for (int i = 0; i < word.size(); i++) {
//             if (word[i] == ch) {
//                 idx = i;
//                 break;
//             }
//         }

//         // 2. If ch not found, return original word
//         if (idx == -1) return word;

//         // 3. Reverse prefix [0..idx]
//         int s = 0, e = idx;
//         while (s < e) {
//             swap(word[s], word[e]);
//             s++;
//             e--;
//         }

//         return word;
        
//     }
// };

class Solution {
public:
    string reversePrefix(string word, char ch) {
        int idx = word.find(ch);   // find first occurrence

        if (idx == string::npos)
            return word;

        reverse(word.begin(), word.begin() + idx + 1);
        return word;
    }
};
