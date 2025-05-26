#include <bits/stdc++.h>
using namespace std;

class node{
    
    public:
        int data;
        node *next;
    
    node(int data){
        this->data = data;
        this->next = nullptr;
    }

};


void insertAtHead(node* &head , int d){
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}


void print(node* &head){
    node *temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


node* reverseLL(node* &head){
    node *prev = nullptr;
    node *curr = head;
    node *forward = nullptr;

    while(curr != nullptr){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

int main(){
    node *node1 = new node(10);
    node *head = node1;
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);

    cout << "Before reversing: " << endl;
    print(head);

    head = reverseLL(head);
    cout << "After reversing: " << endl;
    print(head);
}