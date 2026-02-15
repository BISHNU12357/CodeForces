#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = n; i > 0; i--)
    {
        int j = i;
        while (j--)
            cout << "*";
        cout << endl;
    }
}