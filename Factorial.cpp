#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mul = n;
    while (n--)
    {
        mul *= n;
    }
    cout << mul << endl;
    return 0;
}