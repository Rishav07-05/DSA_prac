#include <bits/stdc++.h>
using namespace std;
class node{

    public:
        int data;
        node *prev;
        node *next;

    node(int data)
    {
        this->data = data;
        this->prev = nullptr;
        this->next = nullptr;
    }

};


// printing the LL 

void print(node* &head){
    node *temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


// Insertion at head 

void insertAtHead(node* &head , int d){
    node *temp = new node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}


// Insertion at tail 

void insertAtTail(node* &tail , int d){
    node *temp = new node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

// Insertion at position 

void insertAtPosition(node* &head, node* &tail , int d , int pos){


    if(pos == 1){
        insertAtHead(head, d);
        return;
    }


    node *temp = head;
    int cnt = 1;

    
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }
    
    if(temp -> next == nullptr){
        insertAtTail(tail, d);
        return;
    }
    
    node *nodeToInsert = new node(d);
    nodeToInsert->next = temp->next;
    nodeToInsert->prev = temp;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;

}

// Getting the length of LL

int getLen(node *&head)
{
    int len = 0;
    node *temp = head;
    while (temp != nullptr)
    {
        len++;
        temp = temp->next;
    }
    return len;
}



int main(){
    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;
    

    // insertAtHead(head, 20);
    // insertAtHead(head, 30);
    // insertAtHead(head, 40);

    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    insertAtTail(tail, 40);

    insertAtPosition(head, tail, 90, 2);

    int len = getLen(head);
    cout << len << " " << endl;

    print(head);
}