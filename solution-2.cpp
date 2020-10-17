#include <bits/stdc++.h>
using namespace std;
int main()
{
    //input the socks array

    int socks[100000];

    int n;
    cin >> n; //size of socks array

    for (int i = 0; i < n; i++)
    {
        cin >> socks[i];
    }

    sort(socks, socks + n); //not needed but there is no clearity about input array that is sorted or not
    int frequency = 0;
    int answer = 0; //final answer
    int j;
    for (int i = 0; i < n; i++)
    {
        j = socks[i];
        frequency = 0;
        while (socks[i] == j)
        {
            frequency++;
            i++;
        }
        answer += frequency / 2;
    }
    cout << answer << endl;
}


//TIME COMPLEXITY - 0(NLOGN)
//SPACE COMPLEXITY - 0(1)
