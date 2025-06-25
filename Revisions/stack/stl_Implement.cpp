#include <iostream>
#include <stack>
using namespace std;


void printStack(stack <int> st)
{
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main(){

    stack<int> st;

    st.push(2);
    st.push(3);
    st.push(4);

    cout << "All element before pop operation: ";

    printStack(st);

    st.pop();

    cout << "All element after pop operation: ";

    printStack(st);

    if (!st.empty())
        cout << "This is the top element: " << st.top() << endl;
    else
        cout << "Stack is empty!" << endl;

}