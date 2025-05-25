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



// Insert at position

void insertAtPosition(node* &head , node* &tail , int pos , int d)
{

    // check for first position 

    if(pos == 1){
        insertAtHead(head, d);
        return;
    }

    int cntIdx = 1;

    node *temp = head;
    node *nodeToInsert = new node(d);

    while (cntIdx < pos - 1)
    {
        temp = temp->next;
        cntIdx++;
    }

    // check for last position 

    if(temp -> next == nullptr){
        insertAtTail(tail, d);
    }

    // check for any position 

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
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

    insertAtPosition(head, tail, 1, 25);

    print(head);

}