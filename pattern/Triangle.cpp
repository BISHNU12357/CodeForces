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
        for (int j = 0; j < i - 1; j++)
            cout << "*" << " ";
        cout << "*";
        // temp = n - i;
        // while (temp--)
        //     cout << " ";
        cout << endl;
    }
    return 0;
}