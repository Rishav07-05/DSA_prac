#include <bits/stdc++.h>
using namespace std;

class circularQueue{
    int *arr;
    int size;
    int front, rear;

public:
    circularQueue(int s)
    {
        size = s;
        arr = new int[s];
        front = -1;
        rear = -1;
    }


    bool enqueue(int data)
    {
        if((front == 0 && rear == size - 1) || (rear == ((front -1) % (size - 1))))
        {
            cout << "Queue is full";
            return false;
        }
        else if(front == -1)
        {
            front = rear = 0;
            
        }
        else if(rear == size - 1 && front != 0)
        {
            rear = 0;
            
        }
        else
        {
            rear++;
            
        }

        arr[rear] = data;
        return true;
    }

    int dequeue()
    {
        

        if (front == -1)
        {
            cout << "Queue is empty";
            return -1;
        }

        int result = arr[front];
        arr[front] = -1;

        if (front == rear)
        {
            front = rear = -1;
        }
        else if(front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }

        return result;
    }

    bool isEmpty()
    {
        if(front == -1)
        {
            return true;
        }
        return false;
    }

    int frontEle()
    {
        if (isEmpty())
        {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[front];
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Queue contents: ";
        int i = front;
        while (true)
        {
            cout << arr[i] << " ";
            if (i == rear)
                break;
            i = (i + 1) % size;
        }
        cout << endl;
    }
};

int main()
{
    int s;
    cout << "Enter queue size: ";
    cin >> s;

    circularQueue q(s);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    cout << "Dequeued: " << q.dequeue() << endl;
    q.display();

    q.enqueue(40);
    q.enqueue(50);
    q.display();

    cout << "Front element: " << q.frontEle() << endl;

    return 0;
}