#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (int i = 0; i < s.size(); i++) {

            // opening brackets
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            }
            else {
                // if stack empty → invalid
                if (st.size() == 0) {
                    return false;
                }

                // matching condition
                if ((st.top() == '(' && s[i] == ')') ||
                    (st.top() == '[' && s[i] == ']') ||
                    (st.top() == '{' && s[i] == '}')) {
                    
                    st.pop();   // remove matched
                }
                else {
                    return false;
                }
            }
        }

        return st.size() == 0;
    }
};