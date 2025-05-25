#include <bits/stdc++.h>
using namespace std;

class node {
    public:
        int data;
        node *next;

    // constructor 

    node(int data){
        this->data = data;
        this->next = nullptr;
    }

    // destructor 

    ~node(){
        int value = this->data;

        if(this->next != nullptr){
            delete next;
            this->next = nullptr;
        }
    }

};

void insertAtHead(node* &head , int d){
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}

void deleteAtPosition(node* &head , int pos){
    if(pos == 1){
        node *temp = head;
        head = head->next;
        temp->next = nullptr;
        delete temp;
    }
    else{
        node *curr = head;
        node *prev = nullptr;

        int cnt = 1;
        while(cnt < pos){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev -> next = curr->next;
        curr->next = nullptr;
        delete curr; 
    }
}

void print(node* &head){
    node *temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node *node1 = new node(10);
    node *head = node1;

    insertAtHead(head, 20);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    print(head);

    deleteAtPosition(head, 2);

    print(head);
}