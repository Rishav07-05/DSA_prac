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

void insertAtHead(node* &head , int d){
    node *temp = new node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void printLL(node* &head ){

    node *temp = head;

    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

node* reverseDoubly(node* head){

    node *forward = nullptr;
    node *temp = head;

    while(temp != nullptr)
    {
        forward = temp->next;

        temp->next = temp->prev;
        temp->prev = forward;
        temp = forward;
    }

    if(head != nullptr){
        while(head -> prev != nullptr){
            head = head->prev;
        }
    }

    return head;
}

int main(){
    node *node1 = new node(10);
    node *head = node1;
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);
    printLL(head);
    head = reverseDoubly(head);
    printLL(head);
}