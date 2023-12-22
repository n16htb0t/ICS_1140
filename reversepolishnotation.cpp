// 150. Evaluate Reverse Polish Notation
// Source : https://leetcode.com/problems/evaluate-reverse-polish-notation/
// You are given an array of strings tokens that represents an arithmetic expression in a Reverse Polish Notation.

// Evaluate the expression. Return an integer that represents the value of the expression.

// Note that:

//     The valid operators are '+', '-', '*', and '/'.
//     Each operand may be an integer or another expression.
//     The division between two integers always truncates toward zero.
//     There will not be any division by zero.
//     The input represents a valid arithmetic expression in a reverse polish notation.
//     The answer and all the intermediate calculations can be represented in a 32-bit integer.

#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int evalRPN(vector<string>& tokens){
        stack<int> st;
        for(auto token : tokens){
            if(token == "+" || token == "-" || token == "*" || token == "/"){
                int num1 = st.top();
                st.pop();
                int num2 = st.top();
                st.pop();
                if(token == "+"){
                    st.push(num1 + num2);
                }
                else if(token == "-"){
                    st.push(num2 - num1);
                }
                else if(token == "*"){
                    st.push(num1 * num2);
                }
                else if(token == "/"){
                    st.push(num2 / num1);
                }
            }
            else{
                st.push(stoi(token));
            }
        }
        return st.top();

    }
};
int main(){
    vector<string> tokens = {"2","1","+","3","*"};
    Solution solution;
    int result = solution.evalRPN(tokens);
    cout << "Result: " << result << endl;

    return 0;
}