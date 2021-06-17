#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

void solve()
{
    ll A,B,a,b,ans;
    cin >> A >> B;

    ll res = A+3;

    for (int i = 0; i < res; i++)
    {
        if (B == 1 && i == 0)
        {
            continue;
        }
        b = B + i;
        a = A;
        ans = i;
        while(a)
        {
            a /= b;
            ans++;
        }
        res = min(res, ans);
    }
    cout << res << "\n";
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}