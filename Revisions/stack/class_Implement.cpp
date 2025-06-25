#include <bits/stdc++.h>
using namespace std;
class Stack {
    public:
        int *arr;
        int size;
        int topIdx;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        topIdx = -1;
    }

    void push(int element){
        if(size - topIdx > 1){
            topIdx++;
            arr[topIdx] = element;
        }
        else{
            cout << "Stack overflow";
        }
    }

    void pop(){
        if(topIdx >= 0){
            topIdx--;
        }
        else{
            cout << "Stack underflow";
        }
    }

    bool empty(){
        return topIdx == -1;
    }

    int top(){
        if(topIdx != -1){
            return arr[topIdx];
        }
        else{
            return -1;
        }
    }

};


void printStack(Stack st){
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main(){
    Stack st(5);
    
    
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    
    printStack(st);
    
    st.pop();

    
    int ans = st.top();
    cout << ans << endl;


    printStack(st);

    
    if(st.empty()){
        cout << "Is empty";
    }
    else{
        cout << "Not empty";
    }
}