#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << "Min = " << min(min(a, b), c) << endl;
    cout << "Max = " << max(max(a, b), c) << endl;
    return 0;
}