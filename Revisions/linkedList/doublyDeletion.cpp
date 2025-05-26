#include <bits/stdc++.h>
using namespace std;
class node
{

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

    ~node(){
        int val = this->data;
        if(next != nullptr){
            delete next;
            next = nullptr;
        }
    }
};

// printing the LL

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

// Insertion at head

void insertAtHead(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
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


// deletion in  LL

void deletion (node* &head , int pos){
    node *temp = head;

    // deleting head  

    if(pos == 1){
        temp->next->prev = nullptr;
        head = temp->next;
        temp->next = nullptr;
        delete temp;
    }


    // deleting position

    node *curr = head;
    node *prev = nullptr;

    int cnt = 1;
    while(cnt < pos){
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    prev->next = curr->next;
    curr->next->prev = curr->prev;
    curr->prev = nullptr;
    curr->next = nullptr;
    delete curr;
}

int main()
{
    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;

    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);

    deletion(head , 2);

    int len = getLen(head);
    cout << len << " " << endl;

    print(head);
}