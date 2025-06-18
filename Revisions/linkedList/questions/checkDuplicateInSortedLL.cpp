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

void printLL(node* &head){
    node *temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


void removeDuplicate(node* &head){
    node *curr = head;
    while(curr != nullptr && curr -> next != nullptr){
        if(curr -> data == curr -> next -> data){
            node *temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        }
        else{
            curr = curr->next;
        }
    }
}

int main(){
    node *node1 = new node(10);
    node *head = node1;
    insertAtHead(head, 20);
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    printLL(head);
    removeDuplicate(head);
    printLL(head);
}