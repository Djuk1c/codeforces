#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int counter = 0;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < j; i++)
        {
            if (a[j] - a[i] == j - i)
            {
                counter++;
            }
        }
    }

    cout << counter << endl;
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