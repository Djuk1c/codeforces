#include <bits/stdc++.h>
#define ll long long
using namespace std;

map <ll, ll> mp;

void solve()
{
    ll n;
    cin >> n;

    // x = a^3 + b^3
    // a is from 1 to cbrt(n)
    // for each a i can find b by formula b = cbrt(x - (a*a*a))
    for (ll a = 1; a < cbrt(n); a++)
    {
        auto b = cbrt(n-(a*a*a));
        if (floor(b) == b)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}