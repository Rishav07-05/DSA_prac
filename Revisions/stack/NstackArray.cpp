#include <bits/stdc++.h>
using namespace std;

class nStack{
    int *arr , *top , *next;
    int freespot , n , s;

public:
    nStack(int N, int S)
    {
        this->n = N;
        this->s = S;
        arr = new int[S];
        top = new int[N];
        next = new int[S];

        // Initialize all stacks as empty
        for (int i = 0; i < n; i++)
            top[i] = -1;

        // All slots are free initially
        for (int i = 0; i < s - 1; i++)
            next[i] = i + 1;
        next[s - 1] = -1;

        freespot = 0;
    }

    bool push(int x , int m)
    {
        if(freespot == -1)
            return false;

        int idx = freespot;
        freespot = next[idx];
        arr[idx] = x;
        next[idx] = top[m - 1];
        top[m - 1] = idx;

        return true;
    }

    int pop(int m)
    {
        if(top[m - 1] == -1)
        {
            return -1;
        }

        int idx = top[m - 1];
        top[m - 1] = next[idx];
        next[idx] = freespot;
        freespot = idx;
        return arr[idx];
    }
};



int main()
{
    int N, S;
    cin >> N >> S;

    nStack st(N, S);

    st.push(10, 1);
    st.push(20, 2);
    st.push(30, 1);

    cout << st.pop(1) << endl;
    cout << st.pop(2) << endl;
    cout << st.pop(1) << endl;

    return 0;
}