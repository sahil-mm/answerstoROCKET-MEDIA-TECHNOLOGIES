#include <bits/stdc++.h>
using namespace std;
int main()
{
    //input the socks array

    int socks[100000];

    int n;
    cin >> n; //size of socks array

    unordered_map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        cin >> socks[i];
        m[socks[i]]++;
    }

    int answer = 0; //final answer

    for (auto it : m)
    {
        answer += it.second / 2;
    }
    cout << answer << endl;
}


//TIME COMPLEXITY - 0(N)
//SPACE COMPLEXITY - 0(N)