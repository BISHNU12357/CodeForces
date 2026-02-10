#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long sum = 0;
    while (n > 0)
    {
        int x = n % 10;
        sum += x;
        n /= 10;
    }
    cout << sum << endl;
    return 0;
}