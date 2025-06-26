#include <bits/stdc++.h>
using namespace std;


void printStack(stack<int> st){
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

void deleteMiddle(stack<int> &st , int cnt  , int mid)
{
    // base case

    if(cnt == mid){
        st.pop();
        return;
    }

    int num = st.top();
    st.pop();

    deleteMiddle(st, cnt + 1, mid);

    st.push(num);
    
}

int main(){
    stack<int> st;
    int n; 
    cin >> n;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        st.push(x);
    }

    int mid = n / 2;
    int cnt = 0;

    
    cout<< "Before deleting the middle element: ";
    printStack(st);
    
    deleteMiddle(st, cnt, mid);
    
    cout<< "After deleting the middle element: ";
    printStack(st);
}