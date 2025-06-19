#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

// Insert at tail
void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (!head)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Take input for a linked list
Node *takeInput(int n)
{
    Node *head = nullptr;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        insertAtTail(head, val);
    }
    return head;
}

void printList(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}


Node* mergeSortedLists(Node* list1, Node* list2) {
    if(list1 == nullptr){
        return list2;
    }
    if(list2 == nullptr){
        return list1;
    }

    Node *prev = list1;
    Node *curr = prev -> next;
    Node *temp = list2;

    while(temp != nullptr && curr != nullptr){
        if((temp -> data <= curr -> data) && (temp -> data >= prev-> data)){

            Node *next2 = temp -> next;

            prev->next = temp;
            next2 = temp->next;
            temp->next = curr;

            prev = temp;
            temp = next2;
        }
        else{
            prev = curr;
            curr = curr->next;

            if(curr == nullptr){
                prev->next = temp;
                return list1;
            }
        }
    }
    return list1;
}

int main()
{
    int n, m;
    cout << "Enter number of elements in List 1: ";
    cin >> n;
    cout << "Enter sorted elements of List 1: ";
    Node *list1 = takeInput(n);

    cout << "Enter number of elements in List 2: ";
    cin >> m;
    cout << "Enter sorted elements of List 2: ";
    Node *list2 = takeInput(m);

    cout << "List 1: ";
    printList(list1);

    cout << "List 2: ";
    printList(list2);

    Node *merged = mergeSortedLists(list1, list2);

    cout << "Merged Sorted List: ";
    printList(merged);

    return 0;
}
