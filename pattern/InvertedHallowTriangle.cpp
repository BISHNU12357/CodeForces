#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = n; i > 0; i--)
    {
        int temp = n - i;
        while (temp--)
            cout << " ";
        for (int j = 0; j < i; j++)
        {
            if (i == 1 || i == n || j == 0 || j == (i - 1))
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}