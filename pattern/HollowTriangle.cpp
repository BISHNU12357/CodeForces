#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int temp = n - i;
        if (i == n)
        {
            for (int j = 0; j < i; j++)
            {
                cout << "*" << " ";
            }
        }
        else
        {
            while (temp--)
                cout << " ";
            for (int j = 0; j < i; j++)
            {
                int ntemp = i - 1;
                if (j == 0 || j == ntemp)
                    cout << "*" << " ";
                else
                    cout << " ";
            }
            cout << endl;
        }
    }
    return 0;
}