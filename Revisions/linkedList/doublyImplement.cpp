#include <bits/stdc++.h>
using namespace std;
class node{

    public:
        int data;
        node *prev;
        node *next;

    node(int data){
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }

};

int main(){
    node *node1 = new node(10);
    cout << node1->data << " " << endl;
    cout << node1->next << " " << endl;
    cout << node1->prev << " ";
}