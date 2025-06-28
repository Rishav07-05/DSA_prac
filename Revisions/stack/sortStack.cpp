#include <bits/stdc++.h>
using namespace std;

void sortInsert(stack<int> &st , int ele){

    if(st.empty() || (!st.empty() && st.top() < ele)){
        st.push(ele);
        return;
    }

    int top = st.top();
    st.pop();

    sortInsert(st, ele);

    st.push(top);
}

void sortStack(stack<int> &st)
{
    if(st.empty()){
        return;
    }

    int top = st.top();
    st.pop();

    sortStack(st);

    sortInsert(st, top);
}

int main()
{
    int n;
    cin >> n;
    stack<int> st;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        st.push(x);
    }
    sortStack(st);

    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}
