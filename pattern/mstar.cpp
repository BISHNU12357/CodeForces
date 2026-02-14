#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int t = m;
    while (n--)
    {
        t = m;
        while (t--)
            cout
                << "*";
        cout << endl;
    }
    return 0;
}