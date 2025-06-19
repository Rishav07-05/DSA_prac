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


void insertAtTail(node* &tail , node* &curr)
{
    tail -> next = curr;
    tail = curr;
}

node* sort012(node* &head){


    // when replacement of data is allowed


    // int count0 = 0 , count1 = 0 , count2 = 0;
    // node *temp = head;
    // while(temp != nullptr){
    //     if(temp -> data == 0){
    //         count0++;
    //     }
    //     else if(temp -> data == 1){
    //         count1++;
    //     }
    //     else if(temp -> data == 2){
    //         count2++;
    //     }
    //     temp = temp->next;
    // }

    // temp = head;
    // while (temp != nullptr)
    // {
    //     if(count0 != 0){
    //         temp->data = 0;
    //         count0--;
    //     }
    //     else if(count1 != 0){
    //         temp->data = 1;
    //         count1--;
    //     }
    //     else if(count2 != 0){
    //         temp->data = 2;
    //         count2--;
    //     }
    //     temp = temp->next;
    // }
    // return head;



    // when data replacement is not allowed

    node *zerohead = new node(-1);
    node *onehead = new node(-1);
    node *twohead = new node(-1);
    node *zerotail = zerohead;
    node *onetail = onehead;
    node *twotail = twohead;
    node *curr = head;

    while(curr != nullptr){
        if(curr -> data == 0){
            insertAtTail(zerotail, curr);
        }
        else if(curr -> data == 1){
            insertAtTail(onetail, curr);
        }
        else if(curr -> data == 2){
            insertAtTail(twotail, curr);
        }
        curr = curr->next;
    }


    // merge 3 sublists
    
    if(onehead -> next != nullptr){
        zerotail->next = onehead->next;
    }
    else{
        zerotail->next = twohead->next;
    }
    onetail->next = twohead->next;
    twotail->next = nullptr;

    // setting up head 

    head = zerohead->next;

    // deleting dummy nodes
    delete zerohead;
    delete onehead;
    delete twohead;

    return head;
}

int main()
{
    node *node1 = new node(2);
    node *head = node1;
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    insertAtHead(head, 0);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    insertAtHead(head, 0);
    cout << "Before sorting: ";
    printLL(head);
    head = sort012(head);
    cout << "After sorting: ";
    printLL(head);
}