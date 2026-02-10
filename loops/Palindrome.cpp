#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    string t = to_string(n);
    reverse(t.begin(), t.end());
    long long x = stoll(t);
    cout << (x == n ? "YES" : "NO") << endl;
    return 0;
}