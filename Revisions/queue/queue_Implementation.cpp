#include <bits/stdc++.h>
using namespace std;

class Queue{
    int *arr;
    int size, front, rear;

public:

    Queue( int s )
    {
        size = s;
        arr = new int[size];
        front = 0;
        rear = 0;
    }


    bool isEmpty()
    {
        if(front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }


    void enqueue(int data)
    {   
        if(rear == size)
        {
            cout << "The Queue is full";
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }


    int dequeue()
    {
        if(isEmpty())
        {
            return -1;
        }

        else
        {
            int removed = arr[front];
            arr[front] = -1;
            front++;
            return removed;
        }
    }


    int frontEle()
    {
        if(isEmpty())
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    void display()
    {
        cout << "Queue contents: ";
        for (int i = front; i < rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{

    int size;
    cin >> size;
    Queue q(size);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();
    
    q.dequeue();

    q.display();

    int ans = q.frontEle();
    cout << "The front element is: " << ans << endl;
}