#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int t = n;
    while (n--)
    {
        int m = t;
        while (m--)
            cout << "*";
        cout << endl;
    }
    return 0;
}