#include <bits/stdc++.h>
using namespace std;

void ver(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        for (int j = 0; j < i; j++)
            cout << "*" << " ";
        cout << endl;
    }
    for (int i = b - 1; i >= a; i--)
    {
        for (int j = 0; j < i; j++)
            cout << "*" << " ";
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    ver(1, n);
    // ver(n - 1, 1);
    return 0;
}