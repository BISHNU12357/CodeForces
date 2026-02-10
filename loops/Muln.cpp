#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int mul = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        mul *= i;
    }
    cout << mul << endl;
    return 0;
}