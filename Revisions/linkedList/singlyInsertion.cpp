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



// head insertion 

void insertAtHead(node* &head , int d){
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}

// tail insertion 

void insertAtTail(node* &tail , int d){
    node *temp = new node(d);
    tail->next = temp;
    tail = tail -> next; 
}

// printing the LL 

void print(node* &head){
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){

    node *node1 = new node(10);

    node *head = node1;
    node *tail = node1;

    // insertAtHead(head, 12);
    // insertAtHead(head, 16);
    // insertAtHead(head, 18);

    insertAtTail(tail, 12);
    insertAtTail(tail, 16);
    insertAtTail(tail, 18);

    print(head);

}