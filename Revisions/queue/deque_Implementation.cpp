#include <bits/stdc++.h>
using namespace std;

class Deque{
    int *arr;
    int size, front, rear;

public:
    Deque(int s)
    {
        size = s;
        arr = new int[s];
        front = rear = -1;
    }


    void push_front(int data)
    {
        if ((front == 0 && rear == size - 1) || (rear == ((front - 1) % (size - 1))))
        {
            cout << "The queue is empty" << endl;
        }
        else if(front == -1)
        {
            front = rear = 0;
        }
        else if(front == 0 && rear != size - 1)
        {
            front = size - 1;
        }
        else
        {
            front--;
        }
        arr[front] = data;
    }


    void push_rear(int data)
    {
        if ((front == 0 && rear == size - 1) || (rear == ((front - 1) % (size - 1))))
        {
            cout << "The queue is empty" << endl;
        }
        else if (front == -1)
        {
            front = rear = 0;
        }
        else if(front != 0 && rear == size - 1)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = data;
    }


    void pop_front()
    {
        if(front == -1 || rear == -1)
        {
            cout << "The queue is empty" << endl;
        }

        int res = arr[front];
        arr[front] = -1;

        if(front == rear)
        {
            front = rear = 0;
        }
        else if(front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
        cout << "The element to be deleted: " << res << endl;
    }

    void pop_rear()
    {
        if (front == -1 || rear == -1)
        {
            cout << "The queue is empty" << endl;
        }

        int res = arr[rear];
        arr[rear] = -1;

        if (front == rear)
        {
            front = rear = 0;
        }
        else if (rear == 0)
        {
            rear = size - 1;
        }
        else
        {
            rear++;
        }
        cout << "The element to be deleted: " << res << endl;
    }

    void display()
    {
        if (front == -1)
        {
            cout << "Deque is empty\n";
            return;
        }

        cout << "Deque contents: ";
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
    int n;
    cout << "Enter size of deque: ";
    cin >> n;
    Deque dq(n);

    dq.push_rear(1);
    dq.push_rear(2);
    dq.push_front(3);
    dq.push_front(4);
    dq.display();

    dq.pop_rear();
    dq.display();

    dq.pop_front();
    dq.display();

}