#include <bits/stdc++.h>
using namespace std;


// check for valid parenthesis 

bool checkParenthesis(stack<char> st , string &str){

    for (int i = 0; i < str.length(); i++){
        
        if (str[i] == '('  || str[i] == '[' || str[i] == '{' )
        {
            st.push(str[i]);
        }

        else
        {
            if(!st.empty())
            {
                if ((st.top() == '(' && str[i] == ')') || (st.top() == '{' && str[i] == '}') || (st.top() == '[' && str[i] == ']'))
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }
    }

    return st.empty();
}

int main(){
    string str;
    cin >> str;
    stack<char> st;

    if (checkParenthesis(st , str)){
        cout << "Is valid Parenthesis";
    }
    else{
        cout << "Is not valid Parenthesis";
    }
}