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




bool detectLoop(node* &head){
    // map approach 
    
    // if(head == nullptr || head -> next == nullptr){
    //     return false;
    // }
    // node *temp = head;
    // map<node *, bool> visited;

    // while(temp != nullptr){

    //     if(visited[temp] == true){
    //         return true;
    //     }
    //     visited[temp] = true;
    //     temp = temp->next;
    // }
    // return false;


    // floyd's detection

    if(head == nullptr || head -> next == nullptr){
        return false;
    }


    node *slow = head;
    node *fast = head;
    while(fast != nullptr){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            return true;
        }
    }
    return false;
}

int main(){
    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);
    print(head);
    tail->next = head->next;
    if (detectLoop(head))
    {
        cout << "Loop is present";
    }
    else{
        cout << "Loop is not present";
    }
}