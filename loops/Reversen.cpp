#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long newNumber = 0;
    while (n > 0)
    {
        int x = n % 10;
        newNumber += x;
        newNumber *= 10;
        n /= 10;
    }
    cout << newNumber << endl;
    return 0;