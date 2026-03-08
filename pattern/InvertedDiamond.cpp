#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = n; i > 0; i--)
    {
        int temp = 2 * (n - i) + 1;
        for (int j = 0; j < i; j++)
            cout << "*";
        while (temp--)
            cout << " ";
        for (int j = 0; j < i; j++)
            cout << "*";
        cout << endl;
    }
    for (int i = 2; i <= n; i++)
    {
        int temp = 2 * (n - i) + 1;
        for (int j = 0; j < i; j++)
            cout << "*";
        while (temp--)
            cout << " ";
        for (int j = 0; j < i; j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}