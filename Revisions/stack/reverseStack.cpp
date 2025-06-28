#include <bits/stdc++.h>
using namespace std;

void insertAtBottom(stack <int> &st , int ele)
{
    // base case 

    if(st.empty()){
        st.push(ele);
    }

    int top = st.top();
    st.pop();

    insertAtBottom(st, ele);

    st.push(top);
}

void reverseStack(stack<int> &st)
{
    // base case 

    if(st.empty()){
        return;
    }

    int top = st.top();
    st.pop();

    reverseStack(st);

    insertAtBottom(st, top);
}

void printStack(stack<int> &st)
{
    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main ()
{
    int n;
    cin >> n;
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    printStack(st);
    reverseStack(st);
    printStack(st);
}