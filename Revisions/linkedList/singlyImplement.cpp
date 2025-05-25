#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node *next;

    // constructor 
    node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

int main(){
    int d;
    cin >> d;
    node *node1 = new node(d);
    cout << "The data is: " << node1->data << endl;
    cout << "The address is: " << node1->next;
} 