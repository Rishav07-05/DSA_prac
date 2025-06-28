#include <bits/stdc++.h>
using namespace std;

bool checkRedundant(stack<char> &st , string str){


    for (int i = 0; i < str.length(); i++){
        if(str[i] == '(' || str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
        {   
            st.push(str[i]);
        }
        else
        {
            bool isredundant = true;
            if (str[i] == ')')
            {
                while(st.top() != '('){
                    if (st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/')
                    {
                        isredundant = false;
                    }
                    st.pop();
                }
                if(isredundant){
                    return true;
                }
                st.pop();
            }
        }
    }

    return false;
}

int main(){
    string str;
    cin >> str;
    stack<char> st;
    if (checkRedundant(st, str))
    {
        cout << "Is redundant";
    }
    else 
    {
        cout << "Is not redundant";
    }
}