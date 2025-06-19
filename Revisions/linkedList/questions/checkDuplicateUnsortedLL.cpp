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

void printLL(node *&head)
{
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


void removeDuplicateUnsorted(node* &head){
    if (head == nullptr || head->next == nullptr)
        return;

    unordered_map<int, bool> seen;
    node *curr = head;
    node *prev = nullptr;

    while(curr != nullptr){
        if(seen[curr -> data]){
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
        }
        else{
            seen[curr->data] = true;
            prev = curr;
            curr = curr->next;
        }
    }
}

int main()
{
    node *node1 = new node(10);
    node *head = node1;
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    printLL(head);
    removeDuplicateUnsorted(head);
    printLL(head);
}