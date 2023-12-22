#include <stack>
#include <string>
#include <bits/stdc++.h>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> st;

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } 
            else if (c == ')' || c == '}' || c == ']') 
            {
                if (st.empty()) {
                    return false;
                } else if (c == ')' && st.top() != '(') {
                    return false;
                } else if (c == '}' && st.top() != '{') {
                    return false;
                } else if (c == ']' && st.top() != '[') {
                    return false;
                } else {
                    st.pop();
                }
            }
        }

        return st.empty();
    }
};
int main(){
    std::string s;
    std::cin >> s;
    Solution sol;
    std::cout << sol.isValid(s) << std::endl;
    
}