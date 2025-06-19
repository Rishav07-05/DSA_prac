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


node* getMid(node* &head){
    node *fast = head;
    node *slow = head;
    while(fast != nullptr && fast -> next != nullptr){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

node* reverse(node* &head){
    node *prev = nullptr;
    node *curr = head;
    node *next = nullptr;

    while(curr != nullptr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}



bool checkPalindrome(node* &head){

    // approach 1 with extra spaces

    // vector<int> ans;
    // node *temp = head;
    // while (temp != nullptr)
    // {
    //     ans.push_back(temp->data);
    //     temp = temp->next;
    // }
    // vector<int> tempAns;
    // tempAns = ans;
    // reverse(ans.begin(), ans.end());
    // bool flag = true;

    // for (int i = 0; i < ans.size(); i++)
    // {
    //     if (tempAns[i] != ans[i])
    //     {
    //         return false;
    //     }
    // }
    // return flag;



    // without extra spaces

    if(head -> next == nullptr){
        return true;
    }

    node *middle = getMid(head);
    node *temp = middle->next;
    middle->next = reverse(temp);

    node *head1 = head;
    node *head2 = middle->next;

    while(head2 != nullptr){
        if(head1 -> data != head2 -> data){
            return false;
        }

        head1 = head1->next;
        head2 = head2->next;
    }
    temp = middle->next;
    middle->next = reverse(temp);
    return true;
}

int main()
{
    node *node1 = new node(1);
    node *head = node1;
    insertAtHead(head, 3);
    insertAtHead(head, 3);
    insertAtHead(head, 1);
    printLL(head);
    if(checkPalindrome(head)){
        cout << "Is palindrome";
    }
    else{
        cout << "Is not palindrome";
    }
}