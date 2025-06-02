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

void print(node* &head){
    node *temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


node* revereKGroup(node *&head, int k){

    if(head == nullptr || k == 1){
        return head;
    }

    int cnt = 0;
    node *temp = head;
    while (cnt < k && temp != nullptr)
    {
        cnt++;
        temp = temp->next;
    }

    if(cnt == k){
        node *prev = nullptr;
        node *curr = head;
        node *forward = nullptr;
        cnt = 0;

        while (curr != nullptr && cnt < k)
        {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            cnt++;
        }

        if(forward != nullptr){
            head->next = revereKGroup(forward, k);
        }

        return prev;
    }

    return head;
}

int main()
{
    node *node1 = new node(10);
    node *head = node1;
    insertAtHead(head , 20);
    insertAtHead(head , 30);
    insertAtHead(head , 40);
    int k;
    cin >> k;
    cout << "Before reversing k groups: ";
    print(head);
    cout << "After reversing k groups: ";
    head = revereKGroup(head , k);
    print(head);
}