#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long m, n;
    cin >> m >> n;
    long long mul = 1;
    if (n == 0)
        cout << 1 << endl;
    else
    {
        while (n--)
        {
            mul *= m;
        }
        cout << mul << endl;
    }
    return 0;
}