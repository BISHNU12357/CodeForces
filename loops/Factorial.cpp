#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long mul = 1;

    while (n > 0)
    {
        mul *= n;
        n--;
    }
    cout << mul << endl;

    return 0;
}