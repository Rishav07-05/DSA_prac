#include <bits/stdc++.h>
using namespace std;

class node
{

public:
    int data;
    node *next;

    node(int data)
    {
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

node* middleLL(node* head){

    // approach 1

    // node *temp = head;
    // int len = 0;
    // while (temp != nullptr)
    // {
    //     len++;
    //     temp = temp->next;
    // }

    // int mid = (len / 2);
    // temp = head;
    // int cnt = 0;

    // while (cnt < mid)
    // {
    //     temp = temp->next;
    //     cnt++;
    // }
    // return temp;


    // approach 2

    node *rabbit = head -> next;
    node *tortoise = head;

    while(rabbit != nullptr){
        rabbit = rabbit->next;
        if(rabbit != nullptr){
            rabbit = rabbit->next;
        }
        tortoise = tortoise->next;
    }

    return tortoise;
    
}

int main()
{
    node *node1 = new node(10);
    node *head = node1;
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);

    print(head);

    node* middleNode = middleLL(head);

    print(middleNode);
}