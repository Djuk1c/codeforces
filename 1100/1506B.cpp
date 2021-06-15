#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    // Get first and last star index (dumb but im tired)
    int ss, es;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '*')
        {
            ss = i;
            break;
        }
    }
    for (int i = s.size(); i >= 0; i--)
    {
        if (s[i] == '*')
        {
            es = i;
            break;
        }
    }
    int counter = 1;
    int i = ss;
    while (i < es)
    {
        if (s[i] == '*')
        {
            counter++;
        }
        int nextStar = min(n - 1, i + k);
        while (s[nextStar] != '*')
        {
            nextStar--;
        }
        i = nextStar;
    }
    cout << counter << endl;
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
