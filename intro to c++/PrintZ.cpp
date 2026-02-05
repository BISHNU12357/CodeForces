#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int t = n;
    while (t > 0)
    {
        if (t == n || t == 1)
        {
            for (int i = 0; i < n; i++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (i == t-1)
                    cout << "*";
                else
                    cout<<" ";
            }
            cout << endl;
        }
        t--;
    }
}