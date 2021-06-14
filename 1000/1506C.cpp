#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;
    int aSize = a.size(), bSize = b.size();
    int longestSubstring = 0;
    for (int len = 1; len <= min(aSize, bSize); len++)
    {   
        for (int i = 0; i + len <= aSize; i++)
        {
            for (int y = 0; y + len <= bSize; y++)
            {
                if (a.substr(i, len) == b.substr(y, len))
                    longestSubstring = max(len, longestSubstring);
            }
        }
    }
    cout << a.size() + b.size() - 2 * longestSubstring << endl;
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
