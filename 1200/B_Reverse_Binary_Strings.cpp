#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int c0 = 0, c1 = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i+1])
            if (s[i] == '1')
                c1++;
            else
                c0++;
    }

    cout << max(c0, c1) << endl;


    // int ans = 0;
    // string temp;

    // while (temp != s)
    // {
    //     int sr = 0;
    //     int er = 0;
    //     for (int i = 0; i < n; i++)
    //     {
    //         if (s[i] == s[i-1] && sr == 0)
    //         {
    //             sr = i;
    //             break;
    //         }
    //         if (s[i] == s[i+1] && sr != 0 && er == 0 && i > sr)
    //         {
    //             er = i;
    //             break;
    //         }
    //     }
    //     // for (int i = n-1; i >= 0; i--)
    //     // {
    //     //     if (s[i] != s[i-1] && er == 0 && sr != 0 && i > sr)
    //     //     {
    //     //         er = i;
    //     //         break;
    //     //     }
    //     // }
    //     temp = s;
    //     reverse(s.begin()+sr, s.end()-(s.length()-1-er));
    //     if (sr == 0 && er == 0)
    //         continue;
    //     ans++;
    //     //printf("sr: %d, er: %d\n", sr, er);
    //     //cout << s << endl;
    // }
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