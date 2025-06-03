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


void insertAtHead(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}


void print(node *&head)
{
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


bool checkCircularLL(node* &head)
{
    if(head == nullptr) return false;

    node *temp = head -> next;

    while(temp != nullptr && temp -> next != head){
        temp = temp->next;
    }

    return temp == head ;
}

int main()
{
    node *node1 = new node(10);
    node *head = node1;
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);
    print(head);
    if(checkCircularLL(head)){
        cout << "true";
    }
    else{
        cout << "false";
    }
}