#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    long long positive, negetive, even, odd;
    positive = negetive = even = odd = 0;
    while (t--)
    {
        long long i;
        cin >> i;
        if (i > 0)
            positive++;
        else if (i == 0)
            positive;
        else
            negetive++;
        if (i % 2 == 0)
            even++;
        else
            odd++;
    }
    cout << positive << endl
         << negetive << endl
         << even << endl
         << odd << endl;
}