#include <bits/stdc++.h>
using namespace std;

class kQueue{
    public:
        int *arr , *front , *rear , *next;
        int size, k, freespot;
    public:
        kQueue(int size , int k)
        {
            this->size = size;
            this->k = k;
            this->arr = new int[size];
            this->front = new int[k];
            this->rear = new int[k];

            for (int i = 0; i < k; i++)
            {
                front[i] = -1;
                rear[i] = -1;
            }

            this->next = new int[size];
            for (int i = 0; i < size - 1; i++)
            {
                next[i] = i + 1;
            }
            next[size - 1] = -1;
            freespot = 0;
        }



        void enqueue(int k , int ele)
        {
            if(freespot == -1)
            {
                cout << "Queue is full" << endl;
            }

            int idx = freespot;
            freespot = next[idx];
            
            if(front[k - 1] == -1)
            {
                front[k - 1] = idx;
            }
            else
            {
                next[rear[k - 1]] = idx;
            }

            next[idx] = -1;
            rear[k - 1] = idx;

            arr[idx] = ele;
        }

        void dequeue(int k)
        {
            if(front[k - 1] == -1)
            {
                cout << "The queue is empty" << endl;
            }

            int idx = front[k - 1];
            front[k - 1] = next[idx];
            next[idx] = freespot;
            freespot = idx;
        }
};

int main()
{
    int k;
    cin >> k;
    kQueue q(9 , k);
    q.enqueue(1, 10);
    q.enqueue(2, 20);
    q.enqueue(3, 30);
    q.enqueue(1, 10);
    q.enqueue(2, 20);

    q.dequeue(1);
    q.dequeue(2);
}