#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long count = 0;
    while (n--)
    {
        long long i;
        cin >> i;
        if ((i != 0 && 18 % i == 0) || i % 45 == 0)
            count++;
    }
    cout << count;
    return 0;
}