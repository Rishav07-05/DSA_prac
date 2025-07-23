#include <bits/stdc++.h>
using namespace std;

string FirstNonRepeating(string  &str)
{

    vector<int> freq(26, 0);
    queue<char> q;
    string ans = "";

    for(auto i: str)
    {
        freq[i - 'a']++;
        q.push(i);


        while(!q.empty() && freq[q.front() - 'a'] > 1)
        {
            q.pop();
        }

        if(!q.empty())
        {
            ans += q.front();
        }
        else
        {
            ans += "#";
        }
    }

    return ans;
}

int main()
{
    string str;
    cin >> str;

    string ans = FirstNonRepeating(str);
    for(auto i: ans)
    {
        cout << i;
    }
}