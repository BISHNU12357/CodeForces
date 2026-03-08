#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int temp = n - i;
        while (temp--)
            cout << " ";
        for (int j = 0; j < i; j++)
        {
            if (i == 1 || j == 0 || j == i - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    for (int i = n - 1; i > 0; i--)
    {
        int temp = n - i;
        while (temp--)
            cout << " ";
        for (int j = 0; j < i; j++)
        {
            if (i == 1 || j == 0 || j == i - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}