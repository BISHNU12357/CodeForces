#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long newNumber = 0;
    if (n == 0)
        cout << newNumber << endl;
    else
    {
        while (n > 0)
        {
            int x = n % 10;
            newNumber = (newNumber * 10) + x;
            n /= 10;
        }
        cout << newNumber << endl;
    }
    return 0;
}