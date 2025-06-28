#include <bits/stdc++.h>
using namespace std;

stack<int>insertAtPeak(stack<int> &st , int ele)
{   
    // base case 

    if(st.empty()){
        st.push(ele);
        return st;
    }

    int top = st.top();
    st.pop();

    insertAtPeak(st, ele);

    st.push(top);

    return st;
}

int main()
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
    int ele;
    cin >> ele;

    stack<int> ans = insertAtPeak(st , ele);

    while(!ans.empty())
    {
        cout << ans.top() << " ";
        ans.pop();
    }
    cout << endl;

}
